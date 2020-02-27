/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 14:26:16 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/23 21:39:28 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>

typedef struct s_list	t_list;

struct					s_list
{
	void	*data;
	t_list	*next;
};

t_list					*ft_create_elem(void *data);
int						ft_list_size(t_list *begin_list);
void					ft_list_push_front(t_list **begin_list, void *data);
void					ft_list_push_back(t_list **begin_list, void *data);

#endif
