/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:50:42 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/25 12:48:12 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);// Si n es 0, retorna 0, no hay caracteres para comparar
	}
	// Compara caracteres de s1 y s2 hasta que encuentre el final de s1, s2 o n
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	// Retorna diferencia de s1 y s2
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
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
