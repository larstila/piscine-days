/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 18:17:35 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/10 18:57:01 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_strncmp(char *str1, char *str2, unsigned int n)
{
	unsigned int i;

	i = 0;

	while(i < n && str1[i] == str2[i])
	{
		if(str1[i] == '\0' && str2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (str1[i] - str2[i]);
}

int		main(void)
{
	printf("%d", ft_strncmp("abcd","abcde", 5));

}
