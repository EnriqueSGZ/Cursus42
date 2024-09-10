/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:30:40 by ensanche          #+#    #+#             */
/*   Updated: 2024/09/10 18:48:20 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/* #include <stdio.h>

int	ft_print_char(char c)
{
	write(1, &c, 1);
	return (1);
} */

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
		write(1, "(nil)", 5);
		return (5);
	}
	else
	{
		write(1, "0x", 2);
		i += ft_hexalong(n);
		return (i + 2);
	}
}

/* int	main(void)
{
	int	n = 42;
	int	*ptr = &n;
	ft_print_ptr((unsigned long)ptr);
	printf("\n%p\n", (void *)ptr);
	return (0);
} */
