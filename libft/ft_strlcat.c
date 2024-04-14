/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:27:58 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/14 20:41:30 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    
    i = 0;
    if (dstsize == 0)
    {
        return strlen(src);
    }
	while ((i < dstsize - 1) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
int main(void)
{
	char	src[] = " you become a tree";
	char	dst[] = "When you overthink something";
    size_t  dstsize = sizeof(dst);

	ft_strlcat(dst, src, dstsize);
	printf("%s", dst);
	return (0);
}