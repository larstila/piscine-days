/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 13:50:31 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/12 16:06:26 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *ret;
	int i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	ret = (int*)malloc(sizeof(*ret) * (max - min));
	while (min < max)
	{
		ret[i] = min;
		min++;
		i++;
	}
	return (ret);
}
