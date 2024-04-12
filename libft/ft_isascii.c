/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:02:15 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/12 16:04:50 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    ft_isascii(char *str)
{
    int     i;
    
    i = 0;
    if (str[0] == '\0')
    {
    return (0);
    }
    else
    {
        while (str[i] != '\0')
        {
            if (!((str[i] >= 0) && (str[i] <= 127)))
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

   	ft_isascii(test);
	printf("%d\n", (ft_isascii(test)));
	return (0);
}*/