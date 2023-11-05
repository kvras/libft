/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:34:35 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/05 18:34:41 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *new;
    t_list *head;
    new = ft_lstnew(f(lst -> content));
    head -> next = new;
    while(lst -> next)
    {
       if(!ft_lstnew(f(lst -> content)))
       {
            ft_lstclear(&head,del);
            return NULL;
       }
        new -> next = ft_lstnew(f(lst -> content));
        lst = lst -> next;
        new = new -> next;
    }
    new -> next = ft_lstnew(f(lst -> content));
    return head -> next;
}