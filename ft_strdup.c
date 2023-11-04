/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:28:20 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/04 12:00:31 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(char *str)
{
	char *ptr;
	size_t len;
	len = ft_strlen(str);
	ptr = (char *)malloc(len+1);
	if(ptr == NULL)
		return NULL;
	ptr = (char *)ft_memcpy(ptr, str, len);
	ptr[len] = '\0';
	return ptr;
}
