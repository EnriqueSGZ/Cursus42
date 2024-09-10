/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dig.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:55:43 by ensanche          #+#    #+#             */
/*   Updated: 2024/09/04 09:01:49 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_get_conversion(long number, int *len)
{
	if (number < 0)
	{
		ft_print_char('-');
		*len += 1;
		number = -number;
	}
	if (number > 9)
	{
		ft_get_conversion(number / 10, len);
		ft_get_conversion(number % 10, len);
	}
	else
	{
		ft_print_char(number + '0');
		*len += 1;
	}
}

int	ft_print_dig(int number)
{
	int	len;

	len = 0;
	ft_get_conversion(number, &len);
	return (len);
}

/* int	main(void)
{
	int	number;
	int	length;

	number = -30;
	length = ft_print_dig(number);
	ft_print_char('\n');
	printf("Length: %d\n", length);
	return (0);
}
 */