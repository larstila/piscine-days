/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:43:21 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/19 18:14:56 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_display_file(char *name)
{
	int		fd;
	int		ret;
	char	buf[11];

	fd = open(name, O_RDONLY);
	if (fd == -1)
	{
		write(1, "open() error\n", 13);
		return ;
	}
	while ((ret = read(fd, buf, 10)))
	{
		buf[ret] = '\0';
		write(1, buf, 10);
	}
	if (close(fd) == -1)
	{
		write(1, "close() error\n", 14);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_display_file(argv[1]);
	else if (argc < 2)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	return (0);
}
