/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:56:41 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/22 16:23:09 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}
/*
int	main(void)
{
	unsigned char	c;

	c = 'b';
	printf("%c\n", ft_toupper(c));
	return (0);
}*/
