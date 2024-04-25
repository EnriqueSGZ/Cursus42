/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:24:18 by codespace         #+#    #+#             */
/*   Updated: 2024/04/25 12:37:33 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	c = (unsigned char)c;// Carácter c a un unsigned char para evitar problemas con signo
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);//Retorna un puntero al carácter encontrado
		}
		s++;
	}
	if (*s == c)// Verifica si se busca null
	{
		return ((char *)s);
	}
	return (NULL);// Si no se encuentra, devuelve null
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