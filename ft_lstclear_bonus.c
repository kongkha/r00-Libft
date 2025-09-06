/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 13:50:28 by pkongkha          #+#    #+#             */
/*   Updated: 2025/09/06 21:23:16 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst_buf;

	while (*lst)
	{
		lst_buf = *lst;
		*lst = lst_buf->next;
		if (lst_buf->content)
			del(lst_buf->content);
		free(lst_buf);
	}
}
