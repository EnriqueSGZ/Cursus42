/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:55:38 by ensanche          #+#    #+#             */
/*   Updated: 2024/05/13 16:56:06 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		size;
	
	size = ft_strlen(s);
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memcpy(ptr, s, size);
	ptr[size] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	*src = "hello";
	char	*mine = NULL;
	char	*original = NULL;
	
	mine = ft_strdup(src);
	original = ft_strdup(src);
	printf("%s\n%s\n", mine, original);
	return (0);
}*/