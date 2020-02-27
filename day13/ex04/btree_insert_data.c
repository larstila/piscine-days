/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:40:18 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/21 20:31:04 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **rt, void *it, int (*cmpf)(void *, void *))
{
	t_btree *node;

	if (!(*rt))
	{
		*rt = btree_create_node(it);
		return ;
	}
	node = *rt;
	if ((cmpf(node->item, it) < 0))
	{
		if (node->left)
			btree_insert_data(&(node->left), it, cmpf);
		else
			node->left = btree_create_node(it);
	}
	else
	{
		if (node->left)
			btree_insert_data((&node->right), it, cmpf);
		else
			node->right = btree_create_node(it);
	}
}
