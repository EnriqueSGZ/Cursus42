/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:57:59 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/12 20:55:25 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcpy(char *restrict dst, const char *restrict src)
{
	unsigned int    i;
    
    i = 0;
    while (dst[i] != '\0')
    {
        dst[i] = src[i];
        i++;
	}
    dst[i] = '\0';
	return (dst);
}
#include <stdio.h>
int	main(void)
{
	char	o[] = "123";
	char	d[] = "67890";

	printf("Cadena origen: %s\n", o);
	ft_strlcpy(d, o);
	printf("Cadena destino: %s\n", d);
	return (0);
}
