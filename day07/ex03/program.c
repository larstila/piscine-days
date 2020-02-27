/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 16:41:20 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/12 20:26:13 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strcat(char *dest, char *src, int k);
int     ft_strlen(char *str);

char	*ft_concat_params(int argc, char **argv)
{
	int 	i;
	int 	len;
	char	*ret;
	int		k;

	i = 1;
	len = 0;
	k = 0;
	while (i < argc)
	{
		len += ft_strlen(argv[i]);
		i++;
	}
	ret = (char*)malloc(sizeof(ret) * (len + 1 - (argc - 2)));
	i = 1;
	while (i < argc)
	{
		k = ft_strcat(ret, argv[i], k);
		ret[k] = '\n';
		i++;
		k++;
	}
	ret[k] = '\0';
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

int		ft_strcat(char *dest, char *src, int k)
{
	int j;
	j = 0;
	while (src[j] != '\0')
	{
		dest[k] = src[j];
		k++;
		j++;
	}
	return (k);
}

int main(int argc, char **argv)
{
	printf("%s", (ft_concat_params(argc, argv)));
}
