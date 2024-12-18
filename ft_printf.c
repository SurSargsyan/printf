/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:44:13 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/16 12:11:52 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(va_list va, char *str, size_t *counter)
{
	if (*str == 'c')
		ft_putchar_pf(va_arg(va, int), counter);
	else if (*str == 's')
		ft_putstr_pf(va_arg(va, char *), counter);
	else if (*str == 'p')
		ft_putptr_pf(va_arg(va, void *), counter);
	else if (*str == 'i' || *str == 'd')
		ft_putnbr_pf(va_arg(va, int), counter);
	else if (*str == 'u')
		ft_putuint_pf(va_arg(va, unsigned int), counter);
	else if (*str == 'x' || *str == 'X')
	{
		if (*str == 'x')
			ft_puthex_pf(va_arg(va, unsigned int), counter, HEX_LOW_BASE);
		else
			ft_puthex_pf(va_arg(va, unsigned int), counter, HEX_UPP_BASE);
	}
	else if (*str == '%')
		ft_putchar_pf(*str, counter);
}

int	ft_printf(char const *str, ...)
{
	va_list	va;
	size_t	counter;

	if (!str)
		return (0);
	counter = 0;
	va_start(va, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_format(va, (char *)str, &counter);
		}
		else
			ft_putchar_pf(*str, &counter);
		str++;
	}
	va_end(va);
	return (counter);
}

/*int main()
{
    size_t counter = 0;
    
    // Probar `ft_printf` con varios tipos de datos
    ft_printf("Prueba de caracteres: %c, %c\n", 'A', 'B');  // caracteres
    ft_printf("Cadena de texto: %s\n", "¡Hola, mundo!");  //cadenas de texto
    ft_printf("Dirección de memoria: %p\n", &counter); //un puntero(dirmemoria)
    ft_printf("Número entero: %i\n", 12345);  // Para imprimir enteros con signo
    ft_printf("Número sin signo: %u\n", 12345);// Para imprimir números sin signo
    ft_printf("Hexadecimal (minúsculas): %x\n", 255);//formato hexadecimal
    ft_printf("Hexadecimal (mayúsculas): %X\n", 255);  //formato hexadecimal
    ft_printf("Porcentaje: %%\n");  // Para imprimir un símbolo '%'
    
    printf("Total de caracteres impresos: %zu\n", counter);  // Imprime el total 

    return 0;
}*/