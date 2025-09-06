/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 00:38:43 by pkongkha          #+#    #+#             */
/*   Updated: 2025/09/03 02:34:20 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_isinlist(const char c, const char *charset, size_t charset_len) {
	while (charset_len--)
	{
		if (*charset == c)
			return (1);
		++charset;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t				counter;
	const size_t		set_len = strlen(set);
	char				*dst_str;
	size_t				*dst_str_alloc_size;
	const char *const	s1_o = s1;

	counter = 0;
	while (*s1)
	{
		if (ft_isinlist(*s1, set, set_len))
			++counter;
		++s1;
	}
	dst_str_alloc_size = (counter + 1) * sizeof(*dst_str);
	dst_str = malloc(dst_str_alloc_size);
	dst_str += dst_str_alloc_size - 1;
	dst_str = '\0';
	while (s1 != s1_o)
	{
		--dst_str;
		if (ft_isinlist(*s1, set, set_len))
			dst_str = s1;
		--s1;
	}
	return (dst_str);
}
