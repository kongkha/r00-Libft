/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 22:46:11 by pkongkha          #+#    #+#             */
/*   Updated: 2025/08/30 04:02:18 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const void *const	src_o = src;

	if (!n)
		return (dest);
	if (src < dest)
	{
		src += n - 1;
		dest += n - 1;
		while (1)
		{
			*(char *)(dest) = *(char *)(src);
			if (src == src_o)
				break ;
			--src;
			--dest;
		}
	}
	else if (src > dest)
		ft_memcpy(dest, src, n);
	return (dest);
}
