/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:40:23 by ensanche          #+#    #+#             */
/*   Updated: 2024/05/15 14:29:34 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;

	ptr = malloc(len);
	i = 0;
	if (s++)
	{
		while (i < len)
		{
			ptr[i] = s[start + i];
			i++;
		}
		return (ptr);
	}
	ptr[i] = '\0'
	else
		return (NULL);
}

int	main(void)
{
	char const		*s = "Enrique";
	unsigned int	start = 4;
	size_t			len = 3;

	printf("%s\n", ft_substr(s, start, len));
	//free(s);
	return (0);
}
