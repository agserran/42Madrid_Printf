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

int	ft_putnbr_base(int nb, char *b)
{
	static int		i;
	int				len;

	i = 0;
	len = ft_strlen(b);
	write(1, "bonjour", 7);
	if (nb >= len)
	{
		ft_putnbr_base(nb / len, b);
		nb = nb % len;
	}
	i++;
	ft_putchar(b[nb]);
	return (i);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (*str != '\0')
		i++;
	return (i);
}

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	main(void){
	ft_putnbr_base(500, "0123456789");
	return 0;
}
