/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:01:41 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/05 16:01:43 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstadd_front(t_list **lst,t_list *new)
{
    new = (t_list *)malloc(sizeof(t_list));
    new -> next = *lst;
}