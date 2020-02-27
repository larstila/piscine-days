/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handeling.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:55:44 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/20 18:08:10 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_error(int error, char **av, int i)
{
	ft_putstr(av[0]);
	write(1, ": ", 2);
	if (error == -2)
	{
		write(1, "illegal offset -- ", 18);
		ft_putstr(av[i]);
		return ;
	}
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

int		ft_check(int argc, char **argv, int *nb)
{
	int temp;
	int j;

	j = 0;
	temp = 0;
	if (argc < 4)
	{
		write(1, "Wrong number of arguments.\n", 27);
		return (0);
	}
	while (argv[2][j] >= '0' && argv[2][j] <= '9')
	{
		temp = temp * 10 + argv[2][j++] - '0';
	}
	if (argv[2][j] == '\0')
	{
		*nb = temp;
		return (1);
	}
	else
	{
		ft_error(-2, argv, 2);
		return (0);
	}
	return (0);
}
