/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 20:11:38 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/10 20:52:18 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str)
{
	int i;
	int is_negative;
	int ret;

	ret = 0;
	is_negative = 0;
	i = 0;
	while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
	{
		i++;
	}
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
		{
			is_negative = 1;
		}
		i++;
	}
	while (58 > str[i] && str[i] >= 48) 
		{
			printf("%d", ret);
			printf("%c", '\n');
			ret = ret*10 + (str[i] -  48);
			i++;
		}
	if (is_negative == 1)
	{
		ret *= -1;
	}
	return (ret);
}

int main(void)
{
//	printf("%d", ft_atoi("-123dfgkng463"));
//	printf("%d", ft_atoi("4dfgkng463"));
//	printf("%d", ft_atoi("--3dfgkng463"));
	printf("%d", ft_atoi("	  3dfgkng463"));
	return (0);
}
