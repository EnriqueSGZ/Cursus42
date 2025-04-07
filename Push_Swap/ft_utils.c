/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:41:33 by ensanche          #+#    #+#             */
/*   Updated: 2025/04/07 21:42:31 by ensanche         ###   ########.fr       */
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
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
static size_t	ft_countwords(const char *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		if (*s != c)
		{
			words++;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (words);
}

void	free_split(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	i;
	size_t	len;

	result = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!s || !result)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			result[i++] = ft_substr(s - len, 0, len);
			if (!result[i - 1])
				return (free_split(result), NULL);
		}
		else
			++s;
	}
	result[i] = 0;
	return (result);
}