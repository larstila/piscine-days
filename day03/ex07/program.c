/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 10:40:04 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/07 18:47:25 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}



    while (str[len] != '\0')
    {
        len++;
    }
	while (i <= len)
    {
		rev[i] = str[len - i - 1];
		i++;
    }


	rev[i-1] = '\0';
	str = rev;
    return (str);
}

int main(void)
{
    char *str;
    int i;
	char *rev;

	str = "testi";

	rev = ft_strrev(str);
	printf("%s", rev);
    return (0);
}
