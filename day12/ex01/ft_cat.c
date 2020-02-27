/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:16:39 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/20 13:54:48 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_error(int error, char **av, int i)
{
	ft_putstr(av[0]);
	write(1, ": ", 2);
	ft_putstr(av[i]);
	if (error == 2)
		write(1, ": No such file or directory.\n", 29);
	else if (error == 21)
		write(1, ": Is a directory\n", 17);
	else
	{
		write(1, ": Error number is: ", 19);
		ft_putnbr(error);
		ft_putchar('\n');
	}
}

void	ft_display_file(int fd, char **av, int i)
{
	int		ret;
	char	buf[2];
	int		max;

	ret = 0;
	max = 0;
	if (fd == -1)
	{
		ft_error(errno, av, i);
		return ;
	}
	while (max++ < 30000 && (ret = read(fd, buf, 1)))
	{
		if (ret < 0)
		{
			ft_error(errno, av, i);
			return ;
		}
		buf[ret] = '\0';
		write(1, buf, 1);
	}
	if (close(fd) == -1)
	{
		write(1, "close() error\n", 14);
	}
}

int		main(int argc, char **argv)
{
	int i;
	int fd;

	i = 1;
	while (i < argc)
	{
		if (argc < 2 || argv[i][0] == '-')
		{
			ft_display_file(1, argv, i);
		}
		else
		{
			fd = open(argv[i], O_RDONLY);
			ft_display_file(fd, argv, i);
		}
		i++;
	}
	return (0);
}
