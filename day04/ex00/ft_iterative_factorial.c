/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 18:39:59 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/08 21:43:00 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;

	result = nb;
	if (13 > nb > 0)
	{
		while (nb > 1)
		{
			nb--;
			result = result * (nb);
		}
	}
	else if (nb == 0)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
