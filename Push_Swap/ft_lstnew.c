/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 19:36:32 by ensanche          #+#    #+#             */
/*   Updated: 2025/03/25 19:38:38 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_nodenew(int value)
{
	t_list	*node;
	static int staticpos = 0;
	node = malloc(sizeof(struct s_list));
	if (!node)
	{
		return (NULL);
	}
	node->value = value;
	node->position = staticpos;
	node->next = NULL;
	node->index = 0;
	return (node);
}
/*
int	main(void)
{
	char	*str = "Hello, world!";
	t_list	*node = ft_nodenew((void *)str);

	if (node)
	{
		printf("Contenido del nodo: %s\n", (char *)node->content);
		free(node);
	}
	else
	{
		printf("Error al crear el nodo de la lista.\n");
	}
	return (0);
}
*/