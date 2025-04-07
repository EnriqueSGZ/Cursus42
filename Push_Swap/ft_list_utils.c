/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:49:23 by ensanche          #+#    #+#             */
/*   Updated: 2025/04/07 21:50:44 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	if (!lst)
		return (0);
	count = 1;
	while (lst->next != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

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

void	ft_lstadd_back(t_list **lst, t_list *node)
{
	t_list	*ult;

	if (*lst == NULL)
	{
		(*lst) = node;
	}
	else
	{
		ult = *lst;
		while (ult->next != NULL)
		{
			ult = ult->next;
		}
		(ult)->next = node;
	}
}

t_list	*ft_golast(t_list **lst)
{
    t_list *aux;
    aux = *lst;
	if (!lst || !aux)
	{
		return (NULL);
	}
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	return (aux);
}