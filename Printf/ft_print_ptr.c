/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:30:40 by ensanche          #+#    #+#             */
/*   Updated: 2024/09/10 18:16:15 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexalong(unsigned long n)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	if (n < 16)
	{
		return (ft_print_char(base[n]));
	}
	if (n >= 16)
	{
		i += ft_hexalong(n / 16);
		i += ft_hexalong(n % 16);
	}
	return (i);
}

int	ft_print_ptr(unsigned long n)
{
	int	i;

	i = 0;
	if (!n)
	{
		write(1, "0x0", 3);
		return (3);
	}
	else
	{
		write(1, "0x", 2);
		i += ft_hexalong(n);
		return (i + 2);
	}
}

int	main(void)
{
	ft_print_ptr(250);
	printf("\n%p\n", (void *)250);
	return (0);
}
