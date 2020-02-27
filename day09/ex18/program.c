/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 11:05:28 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/14 11:34:14 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int len_of_tab(char **tab);

char	*ft_join(char **tab, char *sep)
{
	int i;
	int j;
	int k;
	char *ret;

	i = 0;
	j = 0;
	k = 0;
	ret = (char*)malloc(sizeof(ret) * (len_of_tab(tab) + 1));
	while (i < len_of_tab(tab))
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			ret[k] = tab[i][j];
			j++;
			k++;
		}
		ret[k] = *sep;
		k++;
		i++;
	}
	ret[k] = '\0';
	return (ret);
}

int len_of_tab(char **tab)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = 0;
	while (tab[i])
	{
		while(tab[i][j] != '\0')
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

int main(void)
{
	char *str1 = "moi";
	char *str2 = "hoi2";
	char **str = {&str1, &str2};
	printf("%s", ft_join(str, " "));
	return (0);
}
