/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 16:21:06 by pkongkha          #+#    #+#             */
/*   Updated: 2025/09/06 22:05:27 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	*ft_strrchr(const char *s, int c)
{
	int	*i;

	i = NULL;
	while (*s)
	{
		if (*s == (char)c)
			i = (int *)s;
		++s;
	}
	return (i);
}
