/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 10:17:52 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/19 10:43:26 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*temp;
	unsigned int	i;
	int				len;

	len = 0;
	temp = *begin_list;
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	if (len < nbr)
		return (NULL);
	temp = *begin_list;
	i = 0;
	if (len >= nbr)
	{
		while (i < nbr)
		{
			temp = temp->next;
			i++;
		}
		return (temp);
	}
	return (NULL);
}
