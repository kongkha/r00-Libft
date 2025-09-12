/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 00:38:43 by pkongkha          #+#    #+#             */
/*   Updated: 2025/09/06 22:04:48 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_isinlist(const char c, const char *charset, size_t charset_len)
{
	while (charset_len)
	{
		if (*charset++ == c)
			return (1);
		--charset_len;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			trim_size;
	char			*trim;
	const char		*trim_start;
	const char		*trim_end;
	const size_t	set_len = ft_strlen(set);

	while (ft_isinlist(*s1, set, set_len))
		++s1;
	trim_start = s1;
	trim_end = trim_start;
	while (*s1)
	{
		if (!ft_isinlist(*s1, set, set_len))
			trim_end = s1;
		++s1;
	}
	trim_size = trim_end - trim_start + 2;
	trim = malloc(trim_size);
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, trim_start, trim_size);
	return (trim);
}
