/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:27:50 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/11 13:50:14 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char ft_isalpha(char str[])
{
    int i;
    
    i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			if (!(((str[i] >= 'A') && (str[i] <= 'Z'))
					|| ((str[i] >= 'a') && (str[i] <= 'z'))
                        ||  ((str[i] >= '0') && (str[i] <= '9'))))
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
    char	test[] = "H*la";

   	ft_isalpha(test);
	printf("%d\n", (ft_isalpha(test)));
	return (0);
}*/