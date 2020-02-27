/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 22:31:07 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/06 19:14:48 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int tab[3];

	while (tab[0] < 8)
	{
		tab[1] = tab[0] + 1;
		while (tab[1] < '9')
		{
			tab[2] = tab[1] + 1;
			while (tab[2] <= 9)
			{
				ft_putchar(tab[0] + 48);
				ft_putchar(tab[1] + 48);
				ft_putchar(tab[2] + 48);
				if (tab[0] == 8)
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
