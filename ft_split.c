/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 22:32:15 by pkongkha          #+#    #+#             */
/*   Updated: 2025/09/06 20:30:49 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_count_char(char c, char const *s)
{
	size_t	count;

	count = 0;
	while (*s)
		if (*s++ == c)
			++count;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	const size_t	substr_count = ft_count_char(c, s) + 1;
	char			**substrs;
	char			**substrs_o;
	size_t			alloc_size;

	substrs = malloc(substr_count + 1);
	substrs_o = substrs;
	alloc_size = 1;
	while (*(s - alloc_size - 1))
	{
		alloc_size = ft_strchr(s, c) - s + 1;
		*substrs = malloc(alloc_size * sizeof(**substrs));
		if (!*substrs)
		{
			while (--substrs >= substrs_o)
				free(*substrs);
			free(substrs_o);
			return (NULL);
		}
		ft_strlcpy(*substrs++, s, alloc_size);
		s += alloc_size;
	}
	substrs = NULL;
	return (substrs_o);
}
