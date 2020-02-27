/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 12:03:07 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/11 12:30:49 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned i;
    unsigned int j;
	unsigned int emptyspace;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
    {
        emptyspace = size - 1;
		i++;
    }
    while (j < emptyspace)
    {
		if (src[j] == '\0')
		{
			break ;
		}
		dest[i] = src[j];
		i++;
		j++;
    }
    dest[i] = '\0';
	printf("%s", dest);
    return (i + 1);
}

int		main(void)
{
	char a[300] = "first part: ";
	char b[10] = "second";
	printf("%d", ft_strlcat(a, b, 30));
	return (0);
}
