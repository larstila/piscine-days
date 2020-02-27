/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 10:29:53 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/10 20:08:15 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		makeint(char *str, int len, int i, int end);
int		isnegative(char *str, int i, int ret);
int		nothingbefore(char *str, int i);

int		ft_atoi(char *str)
{
	int i;
	int ret;
	int start;
	int end;

	start = 0;
	i = 0;
	ret = 0;
	while (str[i] != '\0')
	{
		if (58 > str[i] && str[i] > 48 && nothingbefore(str, i) == 1)
		{
			start = i;
			while (58 > str[i] && str[i] >= 48)
			{
				end = i;
				i++;
			}
			ret = makeint(str, (end - start - 1), start, end);
			break ;
		}
		i++;
	}
	return (isnegative(str, start, ret));
}

int nothingbefore(char *str, int i)
{
	int once;

	once = 0;
	if (str[i] == 32 || str[i] == 9 || str[i] == 43 || str[i] == 45)
	{
		return (1);
	}
	return (0);
}

int		makeint(char *str, int len, int i, int end)
{
	int j;
	int l;

	j = str[i] - 48;
	l = len;
	if (i < end)
	{
		while (l >= 0)
		{
			j *= 10;
			l--;
		}
		return (j + makeint(str, (len - 1), (i + 1), end));
	}
	if (i == end)
	{
		return (j);
	}
	else
		return (0);
}

int		isnegative(char *str, int i, int ret)
{
	if (str[i - 1] == '-')
	{
		ret *= -1;
	}
	return (ret);
}

int main(void)
{
	printf("%d", ft_atoi("134j"));
	printf("%d", ft_atoi("	234j"));
    printf("%d", ft_atoi("j"));	
	printf("%d", ft_atoi("	"));
	printf("%d", ft_atoi("  k334j"));

	return (0);
}
