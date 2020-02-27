/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 19:02:08 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/11 10:05:49 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ( (65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122))
		{
			if (65 <= str[i] && str[i] <= 90)
			{
				str[i] = (str[i] + 32);
			}
			if ( ((str[i - 1] == ' ') || i == 0 || (str[i - 1] == '+') || 
				  (str[i - 1] == '-')) && (97 <= str[i] && str[i] <= 122))
            {
                str[i] = (str[i] - 32);
            }
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(a)); 
}
