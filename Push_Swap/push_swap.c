/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:58:49 by ensanche          #+#    #+#             */
/*   Updated: 2025/03/26 21:20:20 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//./pushswap "2 -5 6 1 123 1235 654 123 09876"
//./pushswap 2 5 6 1 123 1235 -654 123 09876
//./pushswap "212343 5 6 1" 123 1235 654 123 "9 87 6" 
void ft_pushswap(t_list **a, t_list **b)

void ft_swap(t_list **a)
{
    t_list  *first;
    t_list  *second;
    t_list  *third;
    
    first = *a;
    second = first->next;
    
    first->next = second->next;
    second->next = first;
    a* = second;    
}

void ft_rev_rotate(t_list **a)
{
    t_list *last;
    t_list *second_last;
    t_list  *first;
    
    first = *a;
    last = *a;
    second_last = NULL;
    While (last->next != NULL)
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
	t_list *second;

	first = *a;
	second = *a;
	last = ft_golast(*a);
	if(second->next != NULL)
		second = second->next;
    *(a) = second;
    last->next = first;
    first->next = NULL;
}

int main (int argc, char **argv)
{
	t_list  *node;
    t_list **a;
    t_list **b;
    
	a = NULL;
	b = NULL;
    
	if(argc <= 1)
		return 1;//+ mensaje
	int i = 1;
	int s = 0;
	char **split;
	while(argv[i])
	{
		split = ft_split(argv[i], ' ');
		s = 0;
		while(split[s])
		{
			if(ft_syntax_error(split[s]) || ft_out_of_range(ft_atol(split[s])))
				return(/* free etc , */ 1);
			node = ft_lstnew(ft_atol(split[s]));
			ft_lstadd_back(a, node); //si a fuera *a pondrias &a
			s++;
		}
		free_split(split);
		i++;
	}
	if(ft_check_repetidos(a))
		return(/* free....,  */1);
    ft_lstsize(*a);
	ft_jugamos(a, b);
    return(0);
	
    //node = ft_lstnew(ft_atol(split[i]));
    //parseo:dobles? INT MAX/MIN? Sintaxis(-1a, perro, --24) */
   /* char a = 'a';
   write(1, &a, 1);
   char *str = "HOLA";
   write(1, str, 5);
   write(1, &str[0],1);
   char **split2 = {"primer string", "segundo string"};
   split2[0] = "primer";
   split2[1] = "segund";
   write(1, *split2, ft_strlen(*split2));
   write(1, split2[1], ft_strlen(split2[1])); */
  
}
