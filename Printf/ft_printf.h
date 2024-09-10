/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensanche <ensanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:14:18 by ensanche          #+#    #+#             */
/*   Updated: 2024/09/04 07:15:14 by ensanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> // para las listas
# include <unistd.h>
# include <stdio.h>

int	ft_print_char(char c);
int	ft_print_str(char *s);
int	ft_print_ptr(unsigned long n);
int	ft_print_dig(int n);
int	ft_print_unsigned(unsigned int n);
int	ft_print_hexup(unsigned int n);
int	ft_print_hexlow(unsigned int n);
int	ft_printf(const char *format, ...);

#endif