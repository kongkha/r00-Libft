/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 02:16:44 by pkongkha          #+#    #+#             */
/*   Updated: 2025/08/31 02:37:12 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char* const	big_o = big;
	const char* const	little_o = little;
	const char*		little_start;
	unsigned char	is_in;

	while (len)
	{
		if (*big == *little)
		{
			if (!*little++)
				return (little_start);
			else if (!little_start)
				little_start = big;
			is_in = 1
		}
		else
		{
			is_in = 0;
			little = little_o;
			little_start = NULL;
		}
		++big;
		--len;
	}
	return (big_o);
}
