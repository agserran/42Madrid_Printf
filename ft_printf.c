/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agserran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:43:31 by agserran          #+#    #+#             */
/*   Updated: 2022/09/12 17:17:59 by agserran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	type(va_list arguments, char format)
{
	int	i;

	i = 0;
	if (format == 'c')
		i = i + ft_putchar(va_arg(arguments, char));
	else if (format == 's')
		i = i + ft_putstr(va_arg(arguments, char *));
	else if (format == 'p')
		i = i + ft_putstr(va_arg(arguments, char *));
	else if (format == 'X')
		i = i + ft_putnbr_base(va_arg(arguments, size_t)"0123456789ABCDEF");
	else if (format == 'i' || format == 'd')
		i = i + ft_putnbr(va_arg(arguments, int));
	else if (format == 'x')
		i = i + ft_putnbr_base(va_arg(arguments, size_t)"0123456789abcdef");
	else if (format == '%')
		i = ft_putchar('%');
	return (i);
}
