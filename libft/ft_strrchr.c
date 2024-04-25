/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:31:39 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/25 12:59:05 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	size_t			i;

	i = 0;
	ch = c;
	while (s[i] != '\0')
	{
		i++;
	}
	if (ch == 0)// Si el carácter a buscar es '\0', retorna puntero al final de la cadena
	{
		return ((char *)&s[i]);
	}
	while (i > 0)
	{
		i--;
		if (s[i] == ch)
		{
			return (&((char *)s)[i]);// Retorna un puntero a la posición actual en la cadena
		}
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
