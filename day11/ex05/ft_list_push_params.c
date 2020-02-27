/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:02:05 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/19 18:58:01 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new;

	new = ft_create_elem(data);
	new->next = *begin_list;
	*begin_list = new;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*ret;
	int		i;

	i = 2;
	if (ac <= 1)
		return (0);
	ret = ft_create_elem(av[1]);
	while (i < ac)
	{
		ft_list_push_front(&ret, av[i]);
		i++;
	}
	return (ret);
}
