/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 12:03:07 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/11 12:39:16 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
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
	return (i + 1);
}
