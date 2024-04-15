/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:27:58 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/15 12:39:17 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t	dstlen;
    size_t	srclen;
    size_t	i;
	size_t	spaceleft;
	
	dstlen = 0;
	srclen = 0;
	i = 0;
	if (size > dstlen)
	{
    spaceleft = size - dstlen - 1;
	}
	else
	{
    spaceleft = 0;
	}
    while (dst[dstlen] != '\0')
	{
        dstlen++;
    }
    while (src[srclen] != '\0')
	{
        srclen++;
    }
    while (i < spaceleft && src[i] != '\0')
	{
        dst[dstlen + i] = src[i];
        i++;
    }
    dst[dstlen + i] = '\0';
    return (dstlen + srclen);
}

int main(void) 
{
    char dst[20] = "Hello";
    char src[] = ", World!";
    size_t size = sizeof(dst);
    size_t new_len = ft_strlcat(dst, src, size);

    printf("Concatena string: %s\n", dest);
    printf("nuevo tamaño: %zu\n", new_len);

    return (0);
}
