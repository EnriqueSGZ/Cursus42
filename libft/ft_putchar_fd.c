/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 18:01:55 by ensanche          #+#    #+#             */
/*   Updated: 2024/05/30 19:54:26 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	ft_putchar_fd('H', fd);
	ft_putchar_fd('o', fd);
	ft_putchar_fd('l', fd);
	ft_putchar_fd('a', fd);
	ft_putchar_fd('!', fd);
	return (0);
}*/
