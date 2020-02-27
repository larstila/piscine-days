/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 11:15:13 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/13 14:47:34 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_how_many_words(char *str);
char	*ft_find_word(char *str, int *k, int size);
int		ft_strlen(char *str);

char	**ft_split_whitespaces(char *str)
{
	char	**ret;
	int		i;
	int		k;
	int		len;

	len = 0;
	i = 0;
	k = 0;
	ret = malloc(sizeof(char *) * (ft_how_many_words(str) + 1));
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	while (i < ft_how_many_words(str))
	{
		ret[i] = (char*)malloc(len);
		ret[i] = ft_find_word(str, &k, len);
		i++;
	}
	ret[i] = "0";
	return (ret);
}

char	*ft_find_word(char *str, int *i, int len)
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

int		ft_how_many_words(char *str)
{
	int i;
	int ret;

	i = 0;
	ret = 0;
	if (str[0] != '\n' && str[0] != ' ' && str[0] != '\t' && str[0] != '\0')
		ret++;
	while (str[i] != '\0')
	{
		if ((str[i] != '\n' && str[i] != ' ' && str[i] != '\t') && (str[i - 1]
				== '\n' || str[i - 1] == ' ' || str[i - 1] == '\t'))
		{
			ret++;
		}
		i++;
	}
	return (ret);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
