/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:42:24 by ensanche          #+#    #+#             */
/*   Updated: 2024/05/13 11:54:36 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_calloc(size_t number, size_t size)
{
	void	*ptr;

	ptr = malloc(number * size);
	if (ptr == NULL)
	{
		return (ptr);
	}
	bzero(ptr, number * size);
	return (ptr);
}
/*
int main(void)
{
    int n = 10;
    int *array;
    int i = 0;

    array = (int *)ft_calloc(n, sizeof(int));
    printf("Contenido del array:\n");
    while (i < n) 
	{
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");
    free(array);
    return (0);
}*/
