/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:28:20 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/01 23:36:37 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(char *str)
{
	void *ptr;
	size_t len;
	len = ft_strlen(str);
	ptr = (void *)malloc(len);
	return ((char *)ft_memcpy(ptr, (void *)str, len));
}
