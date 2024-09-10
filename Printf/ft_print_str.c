/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:11:09 by ensanche          #+#    #+#             */
/*   Updated: 2024/08/28 14:35:32 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *s)
{
	int	i;

	if (s == NULL)
	{
		s = "(null)";
	}
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	write(1, s, i);
	return (i);
}

/* int	main(void)
{
	ft_print_str("Hello World");
	return (0);
} */
