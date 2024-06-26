/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:19:49 by ensanche          #+#    #+#             */
/*   Updated: 2024/05/30 19:54:48 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write (fd, s, 1);
		s++;
	}
}
/*
int	main(void)
{
	char	*s = "hola";
	int		fd = 1;

	ft_putstr_fd(s, fd);
	return (0);
}*/
