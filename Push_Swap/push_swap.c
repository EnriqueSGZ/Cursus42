/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:58:49 by ensanche          #+#    #+#             */
/*   Updated: 2025/04/07 21:38:07 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_stack(t_list **stack)
{
    t_list *aux;
    aux = *stack;
    while(aux)
    {
        printf("Nodo:%li|Positon:%i|Index:%i\n", aux->value, aux->position, aux->index);
        aux = aux->next;
    }
}
void ft_set_positions(t_list **stack)
{
    t_list *aux;
    aux = *stack;
    int i;
    i = 1;
    while(aux)
    {
        aux->position = i;
        i++;
        aux = aux->next;
    }
}
void ft_set_index(t_list **stack)
{
    t_list *current;
    t_list *compare;
    int     index;
    
    current = *stack;
    while (current)
    {
        index = 1;
        compare = *stack;
        while (compare)
        {
            if (compare->value < current->value)
                index++;
            compare = compare->next;
        }
        current->index = index;
        current = current->next;
    }
}
int main (int argc, char **argv)
{
	t_list  *node;
    t_list  *a;
    t_list  *b;
    
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
			//if(ft_syntax_error(split[s]) || ft_out_of_range(ft_atol(split[s])))
			//	return(/* free etc , */ 1);
          
			node = ft_lstnew(ft_atol(split[s]));
			ft_lstadd_back(&a, node); //si a fuera *a pondrias &a
			s++;
		}
        if(split)
            free_split(split);
        split = NULL;
        i++;
	}
    ft_set_positions(&a);
    ft_set_index(&a);
    print_stack(&a);
    printf("\nREV ROTATE\n");
    ft_rev_rotate(&a);
    print_stack(&a);
    printf("\nROTATE\n");
    ft_rotate(&a);
    print_stack(&a);
    printf("\nSWAP\n");
    ft_swap(&a);
    print_stack(&a);
    printf("\nPushSWAP\n");
    ft_pushswap(&a, &b);
    print_stack(&a);
    printf("\nSTACkB\n");
    print_stack(&b);
    
    
    
    
/* 	if(ft_check_repetidos(a))
		return(free...., 1);
    ft_lstsize(*a);
	ft_jugamos(a, b);
    return(0); */
	
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
