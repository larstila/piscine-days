/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 09:27:27 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/19 09:43:58 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *now;
	t_list *next;

	now = *begin_list;
	while (now != 0)
	{
		next = now->next;
		free(now);
		now = next;
	}
}
