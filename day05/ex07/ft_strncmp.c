/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 10:49:09 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/11 10:49:12 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *str1, char *str2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && str1[i] == str2[i])
	{
		if (str1[i] == '\0' && str2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (str1[i] - str2[i]);
}
