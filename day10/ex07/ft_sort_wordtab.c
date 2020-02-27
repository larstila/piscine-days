/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 10:34:41 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/18 14:22:07 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *str1, char *str2);

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		len;
	int		sorted;
	char	*temp;

	i = 0;
	len = 0;
	while (tab[i++] != 0)
		len++;
	sorted = 0;
	while (sorted++ == 0)
	{
		i = 0;
		while (i < (len - 1))
		{
			if (ft_strcmp(tab[i + 1], tab[i]) < 0)
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				sorted = 0;
			}
			i++;
		}
	}
}

int		ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] == str2[i])
	{
		if (str1[i] == '\0' && str2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (str1[i] - str2[i]);
}
