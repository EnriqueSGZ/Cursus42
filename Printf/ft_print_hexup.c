/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:58:27 by ensanche          #+#    #+#             */
/*   Updated: 2024/09/04 08:59:18 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexup(unsigned int n)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789ABCDEF";
	if (n < 16)
		return (ft_print_char(base[n]));
	if (n >= 16)
	{
		i += ft_print_hexup(n / 16);
		i += ft_print_hexup(n % 16);
	}
	return (i);
}

/* int	main(void)
{
	int	n;

	n = 45;
	ft_print_hexup(n);
	//printf("\n%X\n", n);
	return (0);
} */
