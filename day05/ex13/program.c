/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 10:11:36 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/11 10:35:59 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char   ft_str_is_lowercase(char *str)
{
    int i;
	int ret;

	ret = 1;
    i = 0;

    while (str[i] != '\0')
    {
        if (!(96 < str[i] && str[i] < 123))
        {
			ret = 0;
			break ;
        }
        i++;
    }
    return (ret);
}

int main(void)
{
	printf("%d", ft_str_is_lowercase("AIOHFOIS"));
    printf("%d", ft_str_is_lowercase(""));
    printf("%d", ft_str_is_lowercase("  asfdsasa"));
    printf("%d", ft_str_is_lowercase("asfdasa"));
    printf("%d", ft_str_is_lowercase("asfdsFAIOHFOISasa"));

	return (0);
}
