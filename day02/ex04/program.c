/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 22:31:07 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/06 09:45:42 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
    return ;
}

void    ft_print_comb(void)
{
    char i;
    char j;
    char k;

    i = '0';
    while (i < '8')
    {
        j = i + 1;
        k = j + 1;
        while (j < k && j < '9')
        {
            while (k <= '9')
            {
                ft_putchar(i);
                ft_putchar(j);
                ft_putchar(k);
                write(1, ", ", 1);
                k++;
            }
            j++;
            k = j + 1;
        }
        i++;
    }
    return ;
}

int     main(void)
{
    ft_print_comb();
    return (0);
}
