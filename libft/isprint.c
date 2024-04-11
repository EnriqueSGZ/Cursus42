/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:38:26 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/11 14:40:54 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char ft_isprint(char *str)
{
    int i;

    i = 0;
    if (str[0] == '\0')
    {
       return (0);
    }
   else
   {
        while (str[i] != '\0')
        {
            if (!((str[i] >= 32) && (str[i] <= 126)))
            {
                return (0);
            }
            i++;
        }
        return (1);
    }
    
}
/*
#include <stdio.h>
int	main(void)
{
    char	test[] = "sánchez";

   	ft_isprint(test);
	printf("%d\n", (ft_isprint(test)));
	return (0);
}*/