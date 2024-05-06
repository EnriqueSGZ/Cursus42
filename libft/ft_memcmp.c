/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 22:14:36 by ensanche          #+#    #+#             */
/*   Updated: 2024/05/06 22:55:55 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;
	size_t		i;

	str1 = (const char *)s1;
	str2 = (const char *)s2;
	i = 0;
	while (n--)
	{
		if (str1[i] != str2[i])
		{
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "abc";
	char	s2[] = "abc";
	size_t	size = 7;

	printf("%d\n", (memcmp(s1, s2, size)));
	printf("%d\n", (ft_memcmp(s1, s2, size)));
	return (0);
}*/
