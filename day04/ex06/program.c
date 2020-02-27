/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 21:46:55 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/08 21:59:13 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
	int i;

	i = 2;
	if ( nb > 2 )
	{
		while (i < nb)
		{
			if ((nb % i) == 0)
			{
				return(0);
			}
			i++;
		}
		return (1);
	}
	return (0);

}

int main(void)
{
	printf("%d",ft_is_prime(7));
	printf("%d",ft_is_prime(443040469));
	printf("%d",ft_is_prime(666666));
	return (0);
}
