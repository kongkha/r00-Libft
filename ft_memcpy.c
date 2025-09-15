/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 22:43:06 by pkongkha          #+#    #+#             */
/*   Updated: 2025/08/30 03:48:45 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void *const	dest_o = dest;

	while (n)
	{
		--n;
		*(unsigned char *)(dest++) = *(unsigned char *)(src++);
	}
	return (dest_o);
}
