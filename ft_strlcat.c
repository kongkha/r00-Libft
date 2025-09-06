/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 14:08:29 by pkongkha          #+#    #+#             */
/*   Updated: 2025/08/30 16:02:53 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char *const			dst_o = dst;
	const char *const	src_o = src;
	size_t				dst_len;
	size_t				siz;

	siz = size;
	while (*dst && siz)
	{
		++dst;
		--siz;
	}
	dst_len = dst - dst_o;
	if (!siz)
		return (dst_len + ft_strlen(src));
	while (--siz && *src)
		*dst++ = *src++;
	while (*src)
		++src;
	*dst = '\0';
	return (dst_len + (src - src_o));
}
