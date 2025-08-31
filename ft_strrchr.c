/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 16:21:06 by pkongkha          #+#    #+#             */
/*   Updated: 2025/08/31 02:16:14 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	*ft_strrchr(const char *s, int c)
{
	const char	*i;

	i = NULL;
	while (*s)
	{
		if (s == c)
			i = s;
		++s;
	}
	return (i);
}
