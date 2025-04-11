/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 21:37:30 by ensanche          #+#    #+#             */
/*   Updated: 2025/04/07 21:50:55 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_push(t_list **a, t_list **b)
{
    t_list  *first;
    t_list  *second;
    
    first = *a;
    second = first->next;
    
    first->next = *b;
    *b = first;
    *a = second;
    
}

void ft_swap(t_list **a)
{
    t_list  *first;
    t_list  *second;

    first = *a;
    second = first->next;
    
    first->next = second->next;
    second->next = first;
    *a = second;   
}

void ft_rev_rotate(t_list **a)
{
    t_list *last;
    t_list *second_last;
    t_list  *first;
    
    first = *a;
    last = *a;
    second_last = NULL;
    while (last->next != NULL)
    {
        second_last = last;
        last = last->next;
    }
    second_last->next = NULL;
    last->next = first;
    *a = last;
}

void ft_rotate(t_list **a)
{
	t_list *first;
	t_list *last;

	first = *a;
	last = ft_golast(a);
	
    *a = first->next;
    last->next = first;
    first->next = NULL;
}