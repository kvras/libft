/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:34:35 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/06 18:28:32 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;

	if (!lst)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	head = new;
	lst = lst->next;
	head->next = new;
	while (lst)
	{
		if (!ft_lstnew(f(lst->content)))
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		new->next = ft_lstnew(f(lst->content));
		lst = lst->next;
		new = new->next;
	}
	return (head);
}
