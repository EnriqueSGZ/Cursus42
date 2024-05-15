/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:26:37 by ensanche          #+#    #+#             */
/*   Updated: 2024/05/15 17:04:06 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	j;
	size_t	i;

	j = 0;
	i = 0;
	ptr = malloc(((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (ptr == NULL)
	{
		return (ptr);
	}
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char const	*s1 = "Enrique";
	char const	*s2 = "Sanchez";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}*/
