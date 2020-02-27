/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 19:14:46 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/07 21:25:49 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index >= 3)
	{
		while (index > 2)
		{
			index--;
			return ((ft_fibonacci(index) + ft_fibonacci(index - 1)));
		}
	}
	if (index == 1 || index == 2)
	{
		return (1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index < 0)
	{
		return (-1);
	}
	return (0);
}
