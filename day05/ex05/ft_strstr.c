/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 16:25:25 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/11 13:15:38 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int tf;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = i;
		tf = 0;
		while (str[j] == to_find[tf] && to_find[tf] != '\0')
		{
			j++;
			tf++;
		}
		if (to_find[tf] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
