/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:11:26 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/16 12:09:25 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_pf(void *ptr, size_t *counter)
{
	char			*str;
	unsigned long	ptr_address;

	if (ptr == NULL)
	{
		ft_putstr_pf("(nil)", counter);
		return ;
	}
	ptr_address = (unsigned long)ptr;
	ft_putstr_pf("0x", counter);
	str = ft_aux_pf(ptr_address, HEX_LOW_BASE);
	ft_putstr_pf(str, counter);
	free(str);
}
/*
int main() {
    size_t counter = 0;
    int num = 42;
    
    // Արձանագրում ենք ցուկսը
    ft_putptr_pf(&num, &counter);  // Տպում ենք 42-ի հասցեն
    printf("\nTotal characters printed: %zu\n", counter);  // տպված նիշերի քանակը
    
    return 0;
}
*/