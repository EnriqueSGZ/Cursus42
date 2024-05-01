/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:11:50 by ensanche          #+#    #+#             */
/*   Updated: 2024/05/01 18:57:38 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	char			ch;
	const char		*str;

	i = 0;
	ch = (char) c;
	str = (const char *)s;
	while (i < n)
	{
		if (str[i] == ch)
		{
			return (&((void *)str)[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "esto no va";
	char	c = 'n';
	size_t	l = 11;

	printf("%s\n", ft_memchr(str, c, l));
	return (0);
}*/
