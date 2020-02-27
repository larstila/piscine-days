/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 09:40:59 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/14 17:12:05 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int						ft_strlen(char *str);

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_par *ret;

	i = 0;
	while (i < ac)
	{
		ret[i].size_param = ft_strlen(av[i]);
		ret[i].str = av[i];
		ret[i].copy = (char*)malloc(sizeof(char*) * (ret[i].size_param + 1));
		j = 0;
		while (av[i][j] != '\0')
		{
			ret[i].copy[j] = av[i][j];
			j++;
		}
		ret[i].tab = ft_split_whitespaces(*av);
		i++;
		printf("%d", ret[i].size_param);
	}
	return (ret);
}

char					*ft_find_word(char *str, int *i, int len)
{
	char	*ret;
	int		j;

	ret = (char*)malloc(sizeof(ret) * (len + 1));
	j = 0;
	while ((str[*i] == '\n' || str[*i] == ' ' || str[*i] == '\t'))
	{
		*i = *i + 1;
	}
	while ((str[*i] != '\n' && str[*i] != ' ' && str[*i] != '\t'))
	{
		ret[j] = str[*i];
		j++;
		*i = *i + 1;
	}
	ret[j] = '\0';
	return (ret);
}

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (1)
	{
		if (str[i] == '\0')
		{
			return (i);
		}
		i++;
	}
}
