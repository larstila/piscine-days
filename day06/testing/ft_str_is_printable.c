/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 10:58:05 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/11 11:10:51 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_str_is_printable(char *str)
{
	int i;
	int ret;

	ret = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(32 <= str[i] && str[i] < 127))
		{
			ret = 0;
			break ;
		}
		i++;
	}
	return (ret);
}