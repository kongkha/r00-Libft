/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 02:10:26 by pkongkha          #+#    #+#             */
/*   Updated: 2025/09/06 20:24:44 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (*(unsigned char*)s1 == *(unsigned char*)s2 && n)
	{
		++s1;
		++s2;
		--n;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
