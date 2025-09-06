/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 02:16:44 by pkongkha          #+#    #+#             */
/*   Updated: 2025/09/06 20:30:26 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char *const	big_o = big;
	const char *const	little_o = little;
	const char			*little_start;

	while (len)
	{
		if (*big == *little)
		{
			if (!*little++)
				return ((char *)little_start);
			else if (!little_start)
				little_start = big;
		}
		else
		{
			little = little_o;
			little_start = NULL;
		}
		++big;
		--len;
	}
	return ((char *)big_o);
}
