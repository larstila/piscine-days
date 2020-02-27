/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 18:59:41 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/07 19:04:31 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power > 0)
	{
		while (power > 0)
		{
			result = result * nb;
			power--;
		}
	}
	else if (power < 0)
	{
		result = 0;
	}
	else
	{
		result = 1;
	}
	return (result);
}
