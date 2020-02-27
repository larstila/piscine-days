/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 19:14:46 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/07 21:17:53 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
	if (index >= 3)
	{
		while (index > 2)
		{
		index--;
		printf("%d", index);
		printf("%c",'\n');		
		return (ft_fibonacci(index) + ft_fibonacci(index - 1));
		}
	}
	if (index == 1 || index == 2)
	{
		return (1);
	}
	if (index == 0) {
		return (0);
	}
	if (index < 0)
	{
		return (-1);
	}
	return (0);
}

int main(void)
{
	printf("%c", 'a');
	printf("%d", ft_fibonacci(-2));
	return (0);
}
