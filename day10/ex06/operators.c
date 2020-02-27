/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 09:28:56 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/18 10:16:56 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do-op.h"

void	add(int first, int third)
{
	ft_putnbr(first + third);
}

void	minus(int first, int third)
{
	ft_putnbr(first - third);
}

void	times(int first, int third)
{
	ft_putnbr(first * third);
}

void	divided(int first, int third)
{
	if (third == 0)
    {
		write(1, "Stop : division by zero\n", 24);
		return ;
    }
	ft_putnbr(first / third);
}

void	modulo(int first, int third)
{
	if (third == 0)
    {
		write(1, "Stop : modulo by zero\n", 22);
		return ;
    }
    ft_putnbr(first % third);
}

