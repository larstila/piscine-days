/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 09:50:39 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/06 18:13:55 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c)
{
	write (1, &c, 1);
	return ;
}

void	ft_print_comb2(void)
{

	int tab[3];
	
	while (tab[0] <= 98)
	{
		tab[2]++;
		tab[1] = tab[2];
		while (tab[1] <= 99)
		{
			ft_putchar(tab[0] / 10 + '0');
			ft_putchar(tab[0] % 10 + '0');
			ft_putchar(' ');
			ft_putchar(tab[1] / 10 + '0');
			ft_putchar(tab[1] % 10 + '0');
			if (tab[0] == 98)
				return ;
			ft_putchar(',');
			ft_putchar(' ');
			tab[1]++;
		}
		tab[0]++;
	}


}

int     main(void)
{
    ft_print_comb2();
    return (0);
}
