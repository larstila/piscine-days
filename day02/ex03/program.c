/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 16:38:13 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/05 19:31:38 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(int i)
{
	write(1, &i, 1);
	return (0);
}

void	ft_is_negative(int n)
{
	if(n >= 0)
	{
		ft_putchar('P');
	} 
	else {
		ft_putchar('N');
	}
	return ;
}

int		main(void)
{
	ft_is_negative(2);
	return (0);
}
