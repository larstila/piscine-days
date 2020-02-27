/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 12:17:52 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/06 10:29:58 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <studio.h>

void    ft_putchar(char a)
{
    write (1, &a, 1);
    return ;
}

void	ft_print_alphabet(void)
{
	char c;
	c = 'g';

	while (c <= 'z')
	{
		ft_putchar(c);
		ft_putchar('\n');
		c++;
	}
	return ;
}

int     main(void)
{
    ft_print_alphabet();
    return (0);
}
