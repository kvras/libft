/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:31:34 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/05 15:42:59 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list *ft_lstnew(void *content)
{
    t_list *head;
    head = (t_list *)malloc(sizeof(t_list));
    if(head == NULL)
        return NULL;
    head -> content = content;
    head -> next = NULL;
    return head;
}