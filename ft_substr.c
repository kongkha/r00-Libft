/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 23:07:01 by pkongkha          #+#    #+#             */
/*   Updated: 2025/09/06 20:16:00 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

static size_t	ft_strnlen(const char *s, size_t n)
{
	const char *const	s_o = s;
	while (*s && n)
	{
		++s;
		--n;
	}
	return	(s - s_o);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	const size_t	s_len = ft_strnlen(s, start + len);
	const size_t	alloc_size = (s_len + 1) * sizeof(*s);

	substr = malloc(alloc_size);
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, alloc_size);
	return (substr);
}
