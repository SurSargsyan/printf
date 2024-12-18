/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:46:20 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/12 13:09:31 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pf(int num, size_t *counter)
{
	if (num == -2147483648)
	{
		ft_putnbr_pf(num / 10, counter);
		ft_putchar_pf('8', counter);
	}
	else if (num < 0)
	{
		ft_putchar_pf('-', counter);
		ft_putnbr_pf(-num, counter);
	}
	else
	{
		if (num > 9)
			ft_putnbr_pf(num / 10, counter);
		ft_putchar_pf(('0' + num % 10), counter);
	}
}
/*
int	main(void)
{
	size_t	counter;

	counter = 0; // Տպված սիմվոլների հաշվիչ
// Թեստ 1: Դրական թիվ
    ft_putnbr_pf(42, &counter);
    write(1, "\n", 1); // Նոր տող
    printf("Տպված սիմվոլներ: %zu\n", counter);
    
    counter = 0; // Հաշվիչի վերակայում
    // Թեստ 2: 0 (հատուկ դեպք)
    ft_putnbr_pf(0, &counter);
    write(1, "\n", 1); // Նոր տող
    printf("Տպված սիմվոլներ: %zu\n", counter);

    counter = 0; // Հաշվիչի վերակայում
    // Թեստ 3: Բացասական թիվ
    ft_putnbr_pf(-12345, &counter);
    write(1, "\n", 1); // Նոր տող
    printf("Տպված սիմվոլներ: %zu\n", counter);

    counter = 0; // Հաշվիչի վերակայում
    // Թեստ 4: int-ի նվազագույն արժեք
    ft_putnbr_pf(-2147483648, &counter);
    write(1, "\n", 1); // Նոր տող
    printf("Տպված սիմվոլներ: %zu\n", counter);

    counter = 0; // Հաշվիչի վերակայում
    // Թեստ 5: int-ի առավելագույն արժեք
    ft_putnbr_pf(2147483647, &counter);
    write(1, "\n", 1); // Նոր տող
    printf("Տպված սիմվոլներ: %zu\n", counter);

    return 0;
}
*/
