/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:13:05 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/03 19:18:07 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(void *dst, const void *src, int  size)
{
	unsigned char *ptr1 = (unsigned char *)dst;
	unsigned char *ptr2 = (unsigned char *)src;
	int len_d;
	int len_s;
	int count;
	int i;
	i = 0;
	len_d = strlen(dst);
	len_s = strlen(src);
	count = sizeof(dst) - len_d;
	if(count <= len_s)
		return len_d + size;
	while(*ptr1)
		ptr1++;
	while(i < count)
	{
		ptr1 = ptr2;
		ptr1++;
		ptr2++;
		i++;
	}
	return len_d + len_s;
}
