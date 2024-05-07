/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:42:24 by ensanche          #+#    #+#             */
/*   Updated: 2024/05/07 17:25:56 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t number, size_t size)
{
	void	*ptr;

	ptr = malloc(number *size);
	if (ptr == NULL)
	{
		return (ptr);
	}
	ft_bzero(ptr, number *size);
	return (ptr);
}

int main(void)
{
	int	*array = (int *)ft_calloc(3, sizeof(int));
	
    *array = 10; *(array + 1) = 20; *(array + 2) = 30;
    printf("%d %d %d\n", *array, *(array + 1), *(array + 2));
    free(array);
	return (0);
}
