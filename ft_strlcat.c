/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:13:05 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/05 21:51:27 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len_d;
	size_t len_s;
	unsigned int i;
	i = 0;
	len_s = ft_strlen(src);
	len_d = ft_strlen((const char *)dst);
	if(dstsize > len_d)
	{
		while(i < (dstsize - len_d - 1) && src[i])
		{
			dst[len_d + i] = src[i];
			i++;
		}
		dst[len_d + i] = '\0';
		return (len_d + len_s);
	}
	return len_s + dstsize;
}
