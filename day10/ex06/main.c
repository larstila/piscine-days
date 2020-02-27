/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 17:50:01 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/18 10:39:09 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do-op.h"

int		main(int argc, char **argv)
{
	char		*operators;
	t_operator	functions[6];
	int			i;

    if (argc != 4)
        return (0);
	operators = "+-*/%";
	functions[0] = &add;
	functions[1] = &minus;
	functions[2] = &times; 
	functions[3] = &divided;
	functions[4] = &modulo;
	i = 0;
	while (operators[i])
	{
		if (operators[i] == argv[2][0])
		{
			functions[i](ft_atoi(argv[1]), ft_atoi(argv[3]));
			return (0);
		}
		i++;
	}
	ft_putnbr(0);
	return (0);
}
