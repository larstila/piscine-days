/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 09:50:52 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/21 20:29:12 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
//void	print_node((void) item);
void    btree_insert_data(t_btree **rt, void *it, int (*cmpf)(int, int));
void print_btree(t_btree *parent, int level);

int		cmpf(int i, int j)
{
	if (i > j)
		return (-1);
	return (0);
}

int	main(void)
{
	t_btree *a;
	t_btree *b;
//	t_btree *c;
//   t_btree *d;

	a = btree_create_node((void *) 2);
//	btree_insert_data(&a, (void*) 4,  &cmpf);
//	btree_insert_data(&a, (void*) 7,  &cmpf);
	btree_insert_data(&a, (void*) 0,  &cmpf);
    btree_insert_data(&a, (void*) 1,  &cmpf);




//	b = btree_create_node((void *)4);
//	a->right = b;
//	a->left = btree_create_node((void *)6);
//	b->left = btree_create_node((void *)8);
//
	print_btree(a, 0);
//	btree_apply_prefix(a, print_node(void *));
	return (0);
}
