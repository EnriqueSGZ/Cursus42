/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:07:05 by ensanche          #+#    #+#             */
/*   Updated: 2024/05/15 17:49:06 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) != NULL && i < j)
	{
		i++;
	}
	while (ft_strchr(set, s1[j]) != NULL && i < j)
	{
		j--;
	}
	ptr = ft_substr(s1, i, j - i + 1);
	return (ptr);
}
/*
int	main(void)
{
	char	*s1 = "---Hola Mundo---";
	char	*set = "-";

	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}*/
