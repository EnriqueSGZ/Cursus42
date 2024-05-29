/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 18:01:55 by ensanche          #+#    #+#             */
/*   Updated: 2024/05/29 19:28:05 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	main(void)
{
	ft_putchar_fd('H', STDOUT_FILENO);
	ft_putchar_fd('o', STDOUT_FILENO);
	ft_putchar_fd('l', STDOUT_FILENO);
	ft_putchar_fd('a', STDOUT_FILENO);
	ft_putchar_fd(' ', STDOUT_FILENO);
	return (0);
}
