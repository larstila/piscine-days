/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 10:22:49 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/07 10:31:55 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	ft_strlen(char *str)
{
	int len;

	len = 0;
	while(str[len] != '\0') 
	{
		len++;
	}
	return len;
}

int main(void)
{
	char *str;
	int i;

	str = "testi";
	i = ft_strlen(str);
	ft_putchar(i + '0');
	return (0);
}
