/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 17:44:02 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/13 18:41:56 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_print(int start, char letter1, int end, char letter2);

void ft_takes_place(int hour)
{
	if (hour <= 24)
		hour*=100;
	if (hour >= 13 && hour < 23)
		ft_print((hour - 12), 'P', (hour - 11), 'P');
	if (hour >= 1 && hour < 11)
		ft_print((hour), 'A', (hour + 1), 'A');
	if (hour >= 23)
		ft_print(hour, 'P', hour - 11, 'A');
	if (hour == 1)
		ft_print(hour, 'P', hour + 11, 'A');
}
void ft_print(int start, char letter1, int end, char letter2)
{
	printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN ");
    printf("%d.00", start);
	printf(" %c.M. AND ", letter1);
	printf("%d.00 ", end);
	printf("%c.M.\n", letter2);
}

