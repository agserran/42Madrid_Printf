/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fuctions2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:16:17 by agserran          #+#    #+#             */
/*   Updated: 2022/09/12 17:03:12 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

int	ft_pointer(void *p)
{
	int n;
	int	len;

	len = 0;
	n = (int)p;
	write(1, "0x", 2);
	len = len + ft_putnbr_base(n, "0123456789ABCDEF");
	return (len + 2);
}
