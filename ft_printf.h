/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:47:13 by agserran          #+#    #+#             */
/*   Updated: 2022/09/19 18:36:06 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int						ft_putchar(int c);
unsigned int			ft_strlen(char	*str);
int						ft_putstr(char	*str);
int						ft_putnbr(int nb);
int						ft_putnbr_base(unsigned int nb, char *b);
int						ft_pointer(void *p);
int						ft_printf(const char *str, ...);
int						ft_puthexa(unsigned long int nbr);

#endif
