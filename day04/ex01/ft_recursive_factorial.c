/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 18:54:29 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/08 21:44:32 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (13 > nb > 0)
	{
		while (nb >= 1)
		{
			return (nb * ft_iterative_factorial(nb - 1));
		}
	}
	if (nb == 0)
	{
		return (1);
	}
	return (0);
}
