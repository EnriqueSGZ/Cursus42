/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 19:36:32 by ensanche          #+#    #+#             */
/*   Updated: 2025/03/27 19:40:19 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(long value)
{
	t_list	*node;

	node = malloc(sizeof(struct s_list));
	if (!node)
	{
		return (NULL);
	}
	node->value = value;
	node->position = 0;
	node->next = NULL;
	node->index = 0;
	return (node);
}
