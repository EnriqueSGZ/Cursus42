/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:09:04 by ensanche          #+#    #+#             */
/*   Updated: 2024/06/10 18:43:11 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
