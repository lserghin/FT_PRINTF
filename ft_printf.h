/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lserghin <lserghin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:47:15 by lserghin          #+#    #+#             */
/*   Updated: 2024/11/28 00:30:29 by lserghin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *Format, ...);
int	ft_putunbr(unsigned int unbr);
int	ft_putptr(void *ptr);
int	ft_putuhex(unsigned int nb);
int	ft_putlhex(unsigned int nb);
int	ft_putstr(char *s);
int	ft_putnbr(int nb);
int	ft_putchar(char c);

#endif
