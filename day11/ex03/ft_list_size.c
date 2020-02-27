/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 19:11:08 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/18 19:21:14 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		len;
	t_list	*temp;

	len = 0;
	temp = begin_list;
	while (temp != 0)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
