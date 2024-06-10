/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:09:04 by ensanche          #+#    #+#             */
/*   Updated: 2024/06/10 16:50:30 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ult;

	if (*lst == NULL)
	{
		(*lst) = new;
	}
	else
	{
		ult = *lst;
		while (ult->next != NULL)
		{
			ult = ult->next;
		}
		(ult)->next = new;
	}
}
