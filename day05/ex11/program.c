/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 10:11:36 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/11 10:22:31 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char   ft_str_is_alpha(char *str)
{
    int i;
	int ret;

	ret = 1;
    i = 0;

    while (str[i] != '\0')
    {
        if (!((65 <= str[i] && str[i] <= 90) || (96 < str[i] && str[i] < 123)))
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
	printf("%d", ft_str_is_alpha("asfdsFAIOHFOISasa"));
    printf("%d", ft_str_is_alpha(""));
    printf("%d", ft_str_is_alpha("AAAAAA;"));
    printf("%d", ft_str_is_alpha("asfdsFAIOHFOISa.sa"));
	return (0);
}
