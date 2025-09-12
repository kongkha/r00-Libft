/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 02:37:59 by pkongkha          #+#    #+#             */
/*   Updated: 2025/09/06 20:34:20 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}

int	ft_atoi(const char *nptr)
{
	int	num;
	int	neg;

	while (ft_isspace(*nptr))
		++nptr;
	neg = 1 - (2 * (*nptr == '-'));
	if (*nptr == '-' || *nptr == '+')
		++nptr;
	num = 0;
	while (ft_isdigit(*nptr))
	{
		num = num * 10 + (*nptr - '0') * neg;
		++nptr;
	}
	return (num);
}
