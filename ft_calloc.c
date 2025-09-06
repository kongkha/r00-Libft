/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 14:25:08 by pkongkha          #+#    #+#             */
/*   Updated: 2025/09/06 22:05:00 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	const size_t	alloc_size = nmemb * size;

	if (nmemb != 0 && alloc_size / nmemb != size)
		return (NULL);
	return (malloc(alloc_size));
}
