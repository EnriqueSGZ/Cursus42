/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:04:39 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/22 19:22:25 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*array;

	i = 0;
	while (array[i] != '\0' && i <= n)
	{
		array[i] = '\0';
		i++;
	}
}

int	main(void)
{
	char	str[] = "Hola buenas";
	size_t	size = 4;
	
	printf("%s\n", ft_bzero())

}