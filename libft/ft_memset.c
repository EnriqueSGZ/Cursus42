/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 20:23:22 by ensanche          #+#    #+#             */
/*   Updated: 2024/05/03 17:42:49 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t				i;
	unsigned char		ch;
	char				*str;

	i = 0;
	ch = (unsigned char) c;
	str = (char *)b;
	while (i < len)
	{
		str[i] = ch;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char			str[] = "Hola Buenas";
	int				c = 128;
	size_t			len = 5;

	ft_memset(str, c, len);
	printf("%sç\n", str);
	return (0);
}*/
