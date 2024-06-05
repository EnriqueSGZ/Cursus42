/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 19:36:32 by ensanche          #+#    #+#             */
/*   Updated: 2024/06/05 17:44:23 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(struct s_list));
	if (!list)
	{
		return (NULL);
	}
	list->content = content;
	list->next = NULL;
	return (list);
}

int main(void)
{
    char *str = "Hello, world!";
    t_list *node = ft_lstnew((void *)str);

    if (node)
    {
        printf("Contenido del nodo: %s\n", (char *)node->content);
        free(node);
    }
    else
    {
        printf("Error al crear el nodo de la lista.\n");
    }
    return 0;
}
