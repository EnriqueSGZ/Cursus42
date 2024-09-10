/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:56:28 by ensanche          #+#    #+#             */
/*   Updated: 2024/09/10 18:15:48 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
	{
		len += ft_print_unsigned(n / 10);
		len += ft_print_unsigned(n % 10);
	}
	else
	{
		len += ft_print_char(n + '0');
	}
	return (len);
}

/* int	main(void)
{
	unsigned int	n;

	n = 65498468;
	ft_print_unsigned(n);
	ft_print_char('\n');
	printf("%u", n);
	return (0);
} */
