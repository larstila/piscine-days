/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 20:12:33 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/13 20:12:49 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_point.h"
void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}
int main(void)
{
	t_point point;
	set_point(&point);
	return (0);
}
