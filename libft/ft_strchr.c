/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 13:24:18 by codespace         #+#    #+#             */
/*   Updated: 2024/04/16 16:50:49 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (char *)s;
		}
		s++;
	}
	return (0);
}
#include <stdio.h>

int	main(void)
{
	char str[] = "Hola Mundo";
	char *p;

	p = ft_strchr(str, 'M');
	printf("El string seria: %s\n", p);
	printf("La direccion de memoria: %p\n", (void *)p);
	printf("La posicion del caracter es: %d\n", (int)(p - str));
	return (0);
}