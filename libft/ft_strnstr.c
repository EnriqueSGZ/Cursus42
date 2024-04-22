/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:15:28 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/22 15:54:43 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
	{
		return ((char *)str);
	}
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] == needle[j] && needle[j] != '\0' && (i + j) < len)
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)(str + i));
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "Es dificil encontrar una aguja en un pajar";
	char	needle[] = "aguja";
	size_t	len = 50;
	
	printf("%s\n", ft_strnstr(str, needle, len));
	printf("%p\n", (void *)ft_strnstr(str, needle, len));
	return (0);
}*/
