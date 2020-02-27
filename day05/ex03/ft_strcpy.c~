/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:00:15 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/10 15:20:03 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *destination, char *source)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(source[i] != '\0')
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = '\0';
	return (destination);
}

int main(void)
{
	char x[] = "moi";
	char y[] = "uusi";
	
//	x = "hello";
//	y = "uusi1";
	printf("%s", x);
	ft_strcpy(x, y);
    printf("%s", x);
}
