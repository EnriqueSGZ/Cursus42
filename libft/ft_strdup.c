/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:55:38 by ensanche          #+#    #+#             */
/*   Updated: 2024/05/15 19:26:59 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		i;

	i = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memcpy(ptr, s1, i);
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	*src = "hello";
	char	*mine = NULL;
	char	*original = NULL;
	
	mine = ft_strdup(src);
	original = strdup(src);
	printf("%s\n%s\n", mine, original);
	return (0);
}*/