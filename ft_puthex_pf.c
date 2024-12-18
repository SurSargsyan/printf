/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:45:59 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/16 12:03:34 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_pf(unsigned int num, size_t *counter, char *base)
{
	char	*str;

	str = ft_aux_pf(num, base);
	if (str)
	{
		ft_putstr_pf(str, counter);
		free(str);
	}
}
/*
int main()
{
    size_t counter = 0;
    unsigned int num = 255;  // Մասնագիտական թիվ (255 վեցանիստում կլինի 'ff')
    
    // Աղյուսակը ցույց է տալիս ինչպես պետք է տպել թիվը վեցանիստ ներկայացմամբ
    ft_puthex_pf(num, &counter, "0123456789abcdef");
    
    printf("\nCounter: %zu\n", counter);  // Տպում ենք տպված նշանների քանակը
    return 0;
}
*/