/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 09:44:11 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/14 09:55:19 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_max(int *tab, int length)
{
	int i;
	int ret;

	i = 1;
	if (length <= 0)
		return (0);
	ret = tab[0];
	while (i < length)
	{
		if ( ret < tab[i])
			ret = tab[i];
		i++;
	}
	return (ret);
}

int main(void)
{
	int tab[] = {};
	printf("%d",ft_max(tab, 0));
	return (0);
}
