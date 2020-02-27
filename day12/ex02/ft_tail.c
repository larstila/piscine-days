/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 14:15:41 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/20 19:40:15 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_display_tail(char **av, int j, int nb, int size)
{
	char	*bufhead;
	char	*buftail;
	int		ret;
	int		fd;

	ret = 0;
	if ((bufhead = (char*)malloc(sizeof(char) * (size - nb + 1))) == NULL)
		return ;
	if ((buftail = (char*)malloc(sizeof(char) * (nb + 1))) == NULL)
		return ;
	if ((fd = open(av[j], O_RDONLY)) == -1)
		return ;
	if ((ret = read(fd, bufhead, (size - nb))) < 0)
	{
		ft_error(errno, av, j);
		return ;
	}
	if (read(fd, buftail, nb) < 0)
		return ;
	buftail[nb] = '\0';
	ft_putstr(buftail);
	ft_putchar('\n');
	if (close(fd) == -1)
		write(1, "close() error\n", 14);
}

void	ft_display_file(int fd, char **av, int i)
{
	int		ret;
	char	buf[2];

	ret = 0;
	if ((fd = open(av[i], O_RDONLY)) == -1)
		return ;
	while ((ret = read(fd, buf, 1)))
	{
		if (ret < 0)
		{
			ft_putnbr(ret);
			ft_error(errno, av, i);
			return ;
		}
		buf[ret] = '\0';
		write(1, buf, 1);
	}
	ft_putchar('\n');
	if (close(fd) == -1)
	{
		write(1, "close() error\n", 14);
	}
}

void	ft_tail(int fd, char **av, int i, int nb)
{
	int		ret;
	char	buf[1];
	int		size;

	if (fd == -1)
	{
		ft_error(errno, av, i);
		return ;
	}
	size = 0;
	while ((ret = read(fd, buf, 1)))
	{
		if (ret < 0)
		{
			ft_error(errno, av, i);
			return ;
		}
		size++;
	}
	if (close(fd) == -1)
		write(1, "close() error\n", 14);
	if (size > nb)
		ft_display_tail(av, i, nb, size);
	else
		ft_display_file(fd, av, i);
}

void	ft_write_header(char *str)
{
	ft_putstr("==> ");
	ft_putstr(str);
	ft_putstr(" <==");
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;
	int fd;
	int nb;
	int show_header;

	i = 3;
	nb = 512;
	show_header = 0;
	if (argc > 4)
		show_header = 1;
	if (ft_check(argc, argv, &nb) == 0)
		return (0);
	while (i < argc)
	{
		if (show_header)
			ft_write_header(argv[i]);
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			ft_error(errno, argv, i);
			i++;
			continue ;
		}
		ft_tail(fd, argv, i++, nb);
	}
}
