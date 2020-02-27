/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 19:07:42 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/07 19:11:09 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
	{
		while (power >= 1)
		{
			return (nb * ft_recursive_power(nb, (power - 1)));
		}
	}
	if (power == 0)
	{
		return (1);
	}
	return (0);
}
