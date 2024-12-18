/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:41:34 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/16 12:09:13 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuint_pf(unsigned int num, size_t *counter)
{
	char	*str;

	str = ft_aux_pf(num, "0123456789");
	if (!str)
	{
		return ;
	}
	ft_putstr_pf(str, counter);
	free(str);
}
/*
int main() {
    size_t counter = 0;
    
    unsigned int num = 123456;
    printf("Testing ft_putuint_pf:\n");
    
    ft_putuint_pf(num, &counter);
    
    printf("\nNumber of characters printed: %zu\n", counter);
    
    return 0;
}
*/