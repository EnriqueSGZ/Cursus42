/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:51:37 by ensanche          #+#    #+#             */
/*   Updated: 2024/09/10 19:04:16 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_conversion(char const *letter, va_list args)
{
	if (*letter == '%')
		return (write(1, "%", 1));
	else if (*letter == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (*letter == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (*letter == 'p')
		return (ft_print_ptr(va_arg(args, unsigned long)));
	else if (*letter == 'd')
		return (ft_print_dig(va_arg(args, int)));
	else if (*letter == 'i')
		return (ft_print_dig(va_arg(args, int)));
	else if (*letter == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (*letter == 'x')
		return (ft_print_hexlow(va_arg(args, unsigned int)));
	else if (*letter == 'X')
		return (ft_print_hexup(va_arg(args, unsigned int)));
	return (0);
}

int	ft_printf(char const *format, ...)
{
	int		size;
	va_list	args;

	size = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			size += ft_conversion(format, args);
		}
		else
			size += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (size);
}

int	main(void)
{
	int				num = 42;
	unsigned int	unum = -42;
	char			*str = "Hello, World!";
	char			ch = 'A';
	void			*ptr = &num;
	ft_printf("String: %s\n", str);
	ft_printf("Character: %c\n", ch);
	ft_printf("Decimal: %d\n", num);
	ft_printf("integer: %i\n", num);
	ft_printf("Unsigned: %u\n", unum);
	ft_printf("Hex Low: %x\n", unum);
	ft_printf("Hex Up: %X\n", unum);
	ft_printf("Pointer: %p\n", ptr);
	ft_printf("%%\n");
	ft_printf("Originals:\n");
	printf("String: %s\n", str);
	printf("Character: %c\n", ch);
	printf("Decimal: %d\n", num);
	printf("integer: %i\n", num);
	printf("Unsigned: %u\n", unum);
	printf("Hex Low: %x\n", unum);
	printf("Hex Up: %X\n", unum);
	printf("Pointer: %p\n", ptr);
	printf("%%");
	return (0);
}
