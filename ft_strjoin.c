/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 00:01:25 by pkongkha          #+#    #+#             */
/*   Updated: 2025/09/06 20:31:17 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	char			*dst;
	const size_t	s1_len = ft_strlen(s1);
	const size_t	s2_len_with_nul = ft_strlen(s2) + 1;

	dst = malloc(s1_len + s2_len_with_nul);
	if (!dst)
		return (NULL);
	ft_memcpy(dst, s1, s1_len);
	ft_memcpy(dst + s1_len, s2, s2_len_with_nul);
	return (dst);
}
