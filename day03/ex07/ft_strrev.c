/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 10:40:04 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/07 21:32:08 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char rev[99];
	int len;
	int i;

	len = 0;
	i = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	while (i <= len)
	{
		rev[i] = str[len - i - 1];
		i++;
	}
	rev[i - 1] = '\0';
	str = rev;
	return (str);
}