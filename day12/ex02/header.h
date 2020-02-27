/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkettune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:51:37 by lkettune          #+#    #+#             */
/*   Updated: 2020/02/20 18:07:41 by lkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <errno.h>
# include <string.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_tail(int fd, char **av, int i, int nb);
void	ft_display_file(int fd, char **av, int i);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_write_header(char *str);
int		ft_check(int argc, char **argv, int *nb);
void	ft_error(int error, char **av, int i);
void	ft_display_tail(char **argv, int i, int nb, int size);

#endif
