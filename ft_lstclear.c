/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:11:07 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/05 18:14:06 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	while(*lst -> next)
	{
		ft_lstdelone(*lst, del);
		*lst = lst -> next;
	}
	ft_lstdelone(*lst, del);
}