/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:48:57 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/05 21:50:41 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void copy(char *ptr, const char *s)
{
	while(*ptr)
		ptr++;
	while(*s)
	{
		*ptr = *s;
		ptr++;
		s++;
	}	
}
char *ft_strjoin(const char *s1, const char *s2)
{
	int len;
	char *ptr;
	if(!(*s1) && !(*s2))
		return NULL;
	len = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(len + 1);
	copy(ptr,s1);
	copy(ptr,s2);
	return ptr;
}
