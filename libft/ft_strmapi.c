/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:57:14 by ensanche          #+#    #+#             */
/*   Updated: 2024/05/15 19:36:54 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	i;
	char	c;

	i = 0;
	ptr = malloc(ft_strlen(s) + 1);
	if (!ptr)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		c = f(i, s[i]);
		ptr[i] = c;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	main(void)
{
	const char	*s = "Hello";
	char		*result;

	result = ft_strmapi(s, &ft_toupper);
	printf("%s\n", result);
	free(result);
	return (0);
}
