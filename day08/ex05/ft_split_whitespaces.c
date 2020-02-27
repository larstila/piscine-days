/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 11:15:13 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/14 16:45:25 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_how_many_words(char *str);
char	*ft_find_word(char *str, int *k, int size);
int		ft_word_size(char *str, int *k);

char	**ft_split_whitespaces(char *str)
{
	char	**ret;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	ret = (char**)malloc(sizeof(char *) * (ft_how_many_words(str) + 1));
	while (i < ft_how_many_words(str))
	{
		ret[i] = (char*)malloc(sizeof(char) * (ft_word_size(str, &k) + 1));
		while ((str[k] == '\n' || str[k] == ' ' ||
				str[k] == '\t') && str[k] != '\0')
			k++;
		j = 0;
		while (str[k] != '\n' && str[k] != ' ' && str[k] != '\t'
			&& str[k] != 127 && str[k] != '\0' && str[k] > 32)
		{
			ret[i][j++] = str[k];
			k++;
		}
		i++;
	}
	ret[i] = 0;
	return (ret);
}

int		ft_how_many_words(char *str)
{
	int i;
	int ret;

	i = 0;
	ret = 0;
	if (str[0] != '\n' && str[0] != ' ' && str[0] != '\t'
		&& str[0] != '\0')
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

int		ft_word_size(char *str, int *j)
{
	int ret;
	int i;

	i = *j;
	ret = 0;
	while ((str[i] != '\n' && str[i] != ' ' && str[i] != '\t') &&
		((str[i] > 32 && str[i] < 127) || str[i] > 127))
	{
		if (str[i] == '\0')
			break ;
		i += 1;
		ret++;
	}
	return (ret);
}
