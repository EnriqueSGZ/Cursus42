/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:40:23 by ensanche          #+#    #+#             */
/*   Updated: 2025/03/27 19:41:45 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	size_t			i;

	i = 0;
	if (start > ft_strlen(s))
	{
		len = 0;
	}
	if (len > ft_strlen(s) - start)
	{
		len = (ft_strlen(s) - start);
	}
	ptr = malloc(len + 1);
	if (ptr == NULL)
	{
		return (ptr);
	}
	while (s[i] != '\0' && i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

