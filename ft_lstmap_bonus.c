/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkongkha <pkongkha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 14:31:01 by pkongkha          #+#    #+#             */
/*   Updated: 2025/09/06 21:26:36 by pkongkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*lst_new_head;
	t_list	*lst_new_last;

	if (!lst || !lst->content)
		return (NULL);
	lst_new_head = ft_lstnew(f(lst->content));
	lst_new_last = lst_new_head;
	while (lst)
	{
		if (lst->content)
			lst_new_last->next = ft_lstnew(f(lst->content));
		else
			lst_new_last->next = ft_lstnew(NULL);
		lst_new_last = lst_new_last->next;
		if (!lst_new_last)
		{
			ft_lstclear(&lst_new_head, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (lst_new_head);
}
