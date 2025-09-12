/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 22:55:46 by pkongkha          #+#    #+#             */
/*   Updated: 2025/09/06 21:16:30 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_digits(int num)
{
	size_t		counter;

	counter = 1;
	while (1)
	{
		num /= 10;
		if (!num)
			break ;
		++counter;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	const int	n_o = n;
	size_t		digits;
	char		*str;
	const int	neg = 1 - (2 * (n < 0));

	digits = count_digits(n);
	str = malloc(digits + 1 + (n < 0));
	if (!str)
		return (NULL);
	if (n < 0)
		*str++ = '-';
	str += digits;
	*str-- = '\0';
	while (digits--)
	{
		*str-- = "0123456789"[(n % 10) * neg];
		n /= 10;
	}
	return (str + (n_o >= 0));
}
