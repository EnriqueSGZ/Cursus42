/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:59:21 by ensanche          #+#    #+#             */
/*   Updated: 2024/05/22 10:52:43 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

void ft_putstr(unsigned int i, char *s)
{
	//evita el warning de variable no utilizada
	(void)i;
	write(1, s, 1);
}

int main(void)
{
	char *str = "HolaHolita";

	ft_striteri(str, ft_putstr);
	return (0);
}
