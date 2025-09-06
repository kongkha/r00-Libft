/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 14:51:52 by pkongkha          #+#    #+#             */
/*   Updated: 2025/09/06 20:20:21 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	const char *const	s_o = s;
	size_t				s_len;
	char				*s_dup;

	while (*s)
		++s;
	s_len = s - s_o;
	s_dup = malloc(s_len + sizeof(*s_dup));
	if (!s_dup)
		return (NULL);
	s_dup += s_len;
	while (1)
	{
		*s_dup-- = *s--;
		if (s == s_o)
			break ;
	}
	return (s_dup);
}
