/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:04:39 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/22 20:11:24 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*array;

	i = 0;
	array = (char *)s;
	while (i < n)
	{
		array[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "Hola buenas";
	size_t	size = 4;

	ft_bzero(str, size);
	printf("%s\n", str);
	return (0);
}*/
