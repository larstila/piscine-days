/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 10:17:04 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/18 10:22:50 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DO_OP_H
# define DO_OP_H

#include <unistd.h>

typedef void	(*t_operator)(int, int);

int		ft_atoi(char *str);
void	ft_putnbr(int i);
void	add(int first, int third);
void	minus(int first, int third);
void	times(int first, int third);
void	divided(int first, int third);
void	modulo(int first, int third);

typedef void	(*t_operator)(int, int);

#endif
