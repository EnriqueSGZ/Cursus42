/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_golast.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:08:35 by ensanche          #+#    #+#             */
/*   Updated: 2025/03/27 19:34:08 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
