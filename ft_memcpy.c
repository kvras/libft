/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:16:17 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/01 17:05:52 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned int i;
	void *ptr;
	i = 0;
	ptr = dst;
	while (i < len && (unsigned char *)src)
	{
		*((unsigned char *)ptr) = *((unsigned char *)src);
		i++;
		src++;
		ptr++;
	}
	return dst;
}
