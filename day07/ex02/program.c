/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 14:15:13 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/12 16:31:11 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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
	ret  = (int*)malloc(sizeof(ret) * (max - min));
	while (min < max)
	{
		ret[i] = min;
		min ++;
		i++;
	}
	*range = ret;
	return (max - min);
}

int main (void)
{
	int **p;
	int *r;
	
	p = &r;
	ft_ultimate_range(p, 2, 2);
	printf("%d", *p[0]);
//	printf("%d", ft_ultimate_range(2,2));
//printf("%d", ft_range(2,2)[1]);
//	printf("%d", ft_ultimate_range(2,3)[0]);
//printf("%d", ft_range(2,3)[0]);
//printf("%d", ft_range(2,3)[1]);
//printf("%d", ft_range(2,3)[2]);

	return (0);
}
