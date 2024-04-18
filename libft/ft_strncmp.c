/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:50:42 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/18 16:15:03 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2 [i]);
}
/*
int	main(void)
{
	char	str1[] = "ola";
	char	str2[] = "ole";
	size_t	n = 2;
	int		result = ft_strncmp(str1, str2, n);
	int		result2 = strncmp(str1, str2, n);

	printf("%d\n", result2);
	printf("%d\n", result);
	return (0);
}*/
