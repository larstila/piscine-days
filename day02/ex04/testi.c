/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testi.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 18:51:48 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/06 19:16:45 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
    return ;
}

void	ft_print_comb(void)
{
	int tab[3];

	while (tab[0] <= 7)
	{
		tab[1] = tab[0] + 1;
		while (tab[1] <= 8)
		{
			tab[2] = tab[1] + 1;
			while (tab[2] <= 9)
			{
				ft_putchar(tab[0] + 48);
				ft_putchar(tab[1] + 48);
				ft_putchar(tab[2] + 48);
				if (tab[0] == 9)
					return ;
				ft_putchar(',');
				ft_putchar(' ');
				tab[2]++;
			}
			tab[1]++;
		}
		tab[0]++;
	}
}

int     main(void)
{
    ft_print_comb();
    return (0);
}
