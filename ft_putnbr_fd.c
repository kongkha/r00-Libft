/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 21:39:46 by pkongkha          #+#    #+#             */
/*   Updated: 2025/09/05 22:07:16 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putnbr_fd(int n, int fd)
{
	char				num_str[11];
	const char *const	num_str_end = &num_str
		+ sizeof(num_str) / sizeof(*num_str) - 1;
	const int			is_neg = n < 0;
	size_t				counter;

	num_str = num_str_end;
	if (is_neg)
	{
		while (1) {
			*num_str = "0123456789"[-n % 10];
			n /= 10;
			--num_str;
			if (!n)
				break;
		}
		*num_str = '-';
	}
	else
		while (1) {
			*num_str = "0123456789"[n % 10];
			n /= 10;
			if (!n)
				break;
			--num_str;
		}
	write(fd, num_str_o, num_str_end - num_str + 1);
}
