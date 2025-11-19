/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-car <jose-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:42:25 by jose-car          #+#    #+#             */
/*   Updated: 2025/11/18 12:58:58 by jose-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> // for va_arg ...
# include <unistd.h> // for write
# include <stdio.h> // for printf original

int		ft_printf(char const *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int nbr);
int		ft_putunbr(unsigned int nbr);
int		ft_puthex(unsigned long nbr, int uppercase);
int		ft_putptr(void *ptr);

#endif