/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:45:37 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/13 17:07:58 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_pf(char c, size_t *counter)
{
	write(1, &c, 1);
	(*counter)++;
}
/*
int	main(void)
{
	size_t	counter ;

	counter = 0;
	ft_putchar_pf('B', &counter);
	ft_putchar_pf('A', &counter);
	ft_putchar_pf('R', &counter);
	ft_putchar_pf('E', &counter);
	ft_putchar_pf('V', &counter);
	ft_putchar_pf('\n', &counter);
}
*/