/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 09:50:52 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/21 19:11:03 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
void	print_node((void) item);

int	main(void)
{
	t_btree *a;
	t_btree *b;
//	t_btree *c;
//   t_btree *d;

	a = btree_create_node((void *)2);
	b = btree_create_node((void *)4);
	a->right = b;
	a->left = btree_create_node((void *)6);
	b->left = btree_create_node((void *)8);

//	print_btree(a, 0);
	btree_apply_prefix(a, print_node(void *));
	return (0);
}
