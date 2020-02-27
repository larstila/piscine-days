/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:32:27 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/19 09:16:14 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	
	t_list *temp;
//	ft_list_push_front(&t1, (void*)56);
//	ft_list_push_front(&t1, (void*)78);
	temp = ft_list_push_params(argc, argv);
//	printf("%s\n", (char*)temp->data);


	while (temp != NULL)
	{
		printf("%s\n", (char*)temp->data);
		temp = temp->next;
	}
//	printf("%d\n", (int)ft_list_last(t1)->data);
	return (0);
}
