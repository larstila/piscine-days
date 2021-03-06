/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:32:27 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/18 19:49:50 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void ft_list_push_back(t_list **begin_list, void *data)
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

int main(void)
{
	t_list *t1 = 0;
	t_list **a;
	t_list *temp;

//	t1 = ft_create_elem((void*)12);
	ft_list_push_back(&t1, (void*)1234);
//	ft_list_push_back(&t1, (void*)56);
//	ft_list_push_back(&t1, (void*)78);
	temp = t1;

	while (temp != NULL)
	{
		printf("%d\n", (int)temp->data);
		temp = temp->next;
	}

	return (0);
}
