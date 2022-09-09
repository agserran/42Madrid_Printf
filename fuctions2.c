/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fuctions2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:16:17 by agserran          #+#    #+#             */
/*   Updated: 2022/09/09 14:47:03 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_putnbr_base(size_t nb, char *b)
{
	static int		i;

	i = 0;
	if (nb > ft_strlen(b))
	{
		ft_putnbr_base(nb / ft_strlen(b), b);
		nb = nb % ft_strlen(b);
	}
	i++;
	ft_putchar(b[nb]);
	return (i);
}
