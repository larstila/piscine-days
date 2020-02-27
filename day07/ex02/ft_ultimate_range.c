/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 14:15:13 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/12 16:45:20 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *ret;
	int i;

	i = 0;
	if (min >= max)
	{
		range = 0;
		return (0);
	}
	ret = (int*)malloc(sizeof(ret) * (max - min));
	while (min < max)
	{
		ret[i] = min - 0;
		i++;
	}
	*range = ret;
	return (max - min);
}
