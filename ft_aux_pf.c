/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_pf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:18:10 by susargsy          #+#    #+#             */
/*   Updated: 2024/12/16 11:59:40 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen_pf(const char *str)
{
	size_t	c;

	c = 0;
	if (!str)
		return (0);
	while (str[c])
		c++;
	return (c);
}

void	ft_bzero_pf(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

void	*ft_calloc_pf(size_t number, size_t size)
{
	void	*dest;

	dest = malloc (number * size);
	if (dest == NULL)
		return (NULL);
	ft_bzero_pf(dest, number * size);
	return (dest);
}

static size_t	ft_len(unsigned long long n, char *base)
{
	size_t				len;
	unsigned long long	base_len;

	len = 1;
	base_len = ft_strlen_pf(base);
	while (n >= base_len)
	{
		n /= base_len;
		len++;
	}
	return (len);
}

char	*ft_aux_pf(unsigned long long n, char *base)
{
	char	*str;
	int		num_len;
	int		base_len;

	if (!base || ft_strlen_pf(base) < 2)
		return (NULL);
	num_len = ft_len(n, base);
	base_len = ft_strlen_pf(base);
	str = ft_calloc_pf((num_len +1), sizeof(char));
	if (!str)
		return (NULL);
	while (num_len > 0)
	{
		num_len --;
		str[num_len] = base[n % base_len];
		n /= base_len;
	}
	return (str);
}
/*
// Главная функция для тестирования
int main(void)
{
	// Пример использования ft_aux_pf
	char *result = ft_aux_pf(42, "0123456789ABCDEF");//42в 16 системе
	if (result)
	{
		printf("Результат: %s\n", result); // Ожидается: 2A
		free(result); // Освобождаем память
	}
	return 0;
}
*/