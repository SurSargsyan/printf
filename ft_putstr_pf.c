/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:47:06 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/12 13:23:00 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_pf(char *str, size_t *counter)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		ft_putchar_pf(*str, counter);
		str++;
	}
}
/*
int main(void)
{
    size_t counter = 0; // Սիմվոլների հաշվիչ

    // Թեստ 1: Ստորագրություն՝ "Hello, World!"
    ft_putstr_pf("Hello, World!", &counter);
    write(1, "\n", 1); // Նոր տող
    printf("Տպված սիմվոլների քանակը: %zu\n", counter);

    counter = 0; // Հաշվիչի զրոյացում
    // Թեստ 2: NULL արժեքի ստորգրություն
    ft_putstr_pf(NULL, &counter);
    write(1, "\n", 1); // Նոր տող
    printf("Տպված սիմվոլների քանակը: %zu\n", counter);

    counter = 0; // Հաշվիչի զրոյացում
    // Թեստ 3: Պարադոքս - դատարկ ստորգրություն
    ft_putstr_pf("", &counter);
    write(1, "\n", 1); // Նոր տող
    printf("Տպված սիմվոլների քանակը: %zu\n", counter);

    return 0;
}
*/