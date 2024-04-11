/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:03:25 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/11 13:23:54 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char ft_isdigit(char *str)
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
            if (!((str[i] >= '0') && (str[i] <= '9')))
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
    char	test[] = "1236456";

   	ft_isdigit(test);
	printf("%d\n", (ft_isdigit(test)));
	return (0);
}*/