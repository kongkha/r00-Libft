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

#include <libft.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	int							n_tmp;
	size_t						counter;
	char						*str;
	char						*str_o;

	n_tmp = n;
	counter = 1;
	while (n_tmp / 10)
		++counter;
	str = malloc(counter + 2 + (n < 0));
	if (!str)
		return (NULL);
	str_o = str;
	if (n < 0)
		*str++ = '-';
	str += counter;
	*str-- = '\0';
	while (counter)
	{
		*str-- = "0123456789"[n % 10];
		n /= 10;
		--counter;
	}
	return (str_o);
}
