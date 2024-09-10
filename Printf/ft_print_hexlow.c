/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexlow.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 06:44:03 by ensanche          #+#    #+#             */
/*   Updated: 2024/09/04 08:58:47 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexlow(unsigned int n)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	if (n < 16)
		return (ft_print_char(base[n]));
	if (n >= 16)
	{
		i += ft_print_hexlow(n / 16);
		i += ft_print_hexlow(n % 16);
	}
	return (i);
}

/* int	main(void)
{
	int	n;

	n = 45;
	ft_print_helow(n);
	//printf("\n%X\n", n);
	return (0);
} */
