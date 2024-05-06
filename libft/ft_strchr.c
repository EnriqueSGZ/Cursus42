/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:24:18 by codespace         #+#    #+#             */
/*   Updated: 2024/05/06 19:35:54 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	c = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == c)
	{
		return ((char *)s);
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "Hola Mundo";
	char	*p;

	p = ft_strchr (str, 'M');
	printf ("El string seria: %s\n", p);
	printf ("La direccion de memoria: %p\n", &p);
	printf ("La posicion del caracter es: %d\n", (int)(p - str));
	return (0);
}*/