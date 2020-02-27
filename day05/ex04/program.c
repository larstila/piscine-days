/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:00:15 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/11 13:31:00 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (dest[i] != '\0')
		{
			dest[i] = src[i];
		}
		i++;
	}
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main(void)
{
	char x[] = "moisfhdoif";
	char y[] = "uusi";
	
	printf("%s", x);
	ft_strncpy(x, y, 5);
    printf("%s", x);
}
