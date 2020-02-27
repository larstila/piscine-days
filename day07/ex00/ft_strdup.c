/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 12:57:29 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/12 14:55:10 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *destination, char *source);

char	*ft_strdup(char *src)
{
	int len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (len == 0)
	{
		return (0);
	}
	return (ft_strcpy((char*)malloc(sizeof(*src) * (len + 1)), src));
}

char	*ft_strcpy(char *destination, char *source)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (source[i] != '\0')
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = '\0';
	return (destination);
}
