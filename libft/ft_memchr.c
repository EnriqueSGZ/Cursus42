/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:11:50 by ensanche          #+#    #+#             */
/*   Updated: 2024/06/03 19:06:36 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	char		ch;
	size_t		i;

	str = (const char *)s;
	ch = (char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
		{
			return (((void *)str) + i);
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
