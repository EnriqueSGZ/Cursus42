/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:31:39 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/24 16:56:31 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "Hola Mundo";
	char	*p;

	p = ft_strrchr (str, 'M');
	printf ("El string seria: %s\n", p);
	printf ("La direccion de memoria: %p\n", &p);
	printf ("La posicion del caracter es: %d\n", (int)(p - str));
	return (0);
}*/
