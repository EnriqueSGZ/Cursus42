/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:04:39 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/22 19:19:26 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	bzero(void *s, size_t n)
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


}