/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 19:02:08 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/11 09:29:57 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (97 <= str[i] && str[i] <= 122)
			str[i] = (str[i] - 32);
		i++;
	}
	return (str);
}

int		main(void)
{
	char a[] = "moiHEIII!!sss";
	printf("%s", ft_strupcase(a)); 
}
