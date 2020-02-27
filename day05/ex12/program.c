/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 10:11:36 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/11 10:28:05 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char   ft_str_is_numeric(char *str)
{
    int i;
	int ret;

	ret = 1;
    i = 0;

    while (str[i] != '\0')
    {
        if (!(48 <= str[i] && str[i] <= 57))
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
	printf("%d", ft_str_is_numeric("aa"));
    printf("%d", ft_str_is_numeric("00000"));
    printf("%d", ft_str_is_numeric(".34534737334"));
    printf("%d", ft_str_is_numeric(""));
    printf("%d", ft_str_is_numeric("34534737334"));
	return (0);
}
