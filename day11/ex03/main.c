/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:32:27 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/18 19:17:07 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int		main(void)
{
	t_list *t1 = 0;
	t_list **a;
	t_list *temp;


	t1 = ft_create_elem((void*)12);
	ft_list_push_front(&t1, (void*)34);
	ft_list_push_front(&t1, (void*)56);
	ft_list_push_front(&t1, (void*)78);
	temp = t1;

/*	while (temp != NULL)
	{
		printf("%d\n", (int)temp->data);
		temp = temp->next;
	}
*/
	printf("%d\n", ft_list_size(t1));
	return (0);
}