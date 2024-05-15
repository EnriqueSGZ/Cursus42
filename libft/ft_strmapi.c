/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:57:14 by ensanche          #+#    #+#             */
/*   Updated: 2024/05/15 20:48:44 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*
char	ft_my_toupper(unsigned int i, char str)
{
	return (str - 32);
}

int	main(void)
{
	char	str[] = "hello.";
	printf("%s\n", str);
	char	*result = ft_strmapi(str, ft_my_toupper);
	printf("%s\n", result);
	return (0);
}*/
