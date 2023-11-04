/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:48:57 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/04 15:40:57 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_strcat(char *s1, char *s2)
{
	while(*s1)
		s1++;
	ft_memmove(s1,s2,ft_strlen(s2));
}
char *ft_strjoin(const char *s1, const char *s2)
{
	int len  = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	char *ptr = (char *)malloc(len + 1);
	if(ptr == NULL)
		return NULL;
	ft_strcat(ptr,(char *)s1);
	ft_strcat(ptr,(char *)s2);
	ptr[len] = '\0';
	return ptr;
}
