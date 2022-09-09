/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fuctions.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:05:48 by agserran          #+#    #+#             */
/*   Updated: 2022/09/09 10:16:12 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prinftf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (*str != '\0')
		i++;
	return (i);
}

int	ft_putstr(char	*str)
{
	if (!str)
	{
		ft_putstre("(null)");
		return (6);
	}
	write (1, str, ft_strlen(str));
	return (ft_strlen(str));
}

int	ft_putnbr(int nb)
{
	int	i;
	
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = 0 - nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	i++;
	ft_putchar(nb + 48);
	if (nbr < 0)
		i++;
	return (i);
}
