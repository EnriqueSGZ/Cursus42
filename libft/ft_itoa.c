/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:56:26 by ensanche          #+#    #+#             */
/*   Updated: 2024/05/15 22:10:28 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_digitlen(int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
		i++;
	while (n / 10 != '\0')
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	size_t		d;
	long int	nbr;

	nbr = n;
	d = ft_digitlen(n);
	ptr = malloc((d + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[d] = '\0';
	if (nbr < 0)
	{
		nbr *= -1;
	}
	while (d > 0)
	{
		d--;
		ptr[d] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		ptr[0] = '-';
	return (ptr);
}
/*
int	main(void)
{
	int	num;

	num = -42;
	printf("%s\n", ft_itoa(num));
	return (0);
}*/
