/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:39:29 by ensanche          #+#    #+#             */
/*   Updated: 2024/05/06 18:46:30 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*chardst;
	char	*charsrc;
	size_t	i;

	i = 0;
	chardst = (char *)dst;
	charsrc = (char *)src;
	if (!dst && !src)
		return (NULL);
	while ()
}
int	main(void)
{
	char	str[] = "origen destino";
	memmove(str, &str[7], 7);
	printf("%p\n", str);
	memcpy(str, &str[7], 7);
	printf("%p\n", str);
	return (0);
}
