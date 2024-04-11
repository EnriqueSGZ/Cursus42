/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:33:45 by ensanche          #+#    #+#             */
/*   Updated: 2024/04/11 13:00:35 by ensanche         ###   ########.fr       */
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
					|| ((str[i] >= 'a') && (str[i] <= 'z'))))
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
    char	test[] = "H0la";

   	ft_isalpha(test);
	printf("%d\n", (ft_isalpha(test)));
	return (0);
}*/