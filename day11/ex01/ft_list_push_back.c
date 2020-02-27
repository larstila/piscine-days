/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:32:27 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/18 18:32:16 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;
	t_list *end;

	new = ft_create_elem(data);
	if (*begin_list != 0)
	{
		end = *begin_list;
		while ((end)->next)
		{
			end = end->next;
		}
		end->next = new;
	}
	else
		*begin_list = new;
}
