/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:19:25 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/01 18:02:47 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if(*src && size)
	{
		memmove(dst,src,size);
		return(strlen(src));
	}
	return 0;
}
int main()
{
    const char *src = "ali";
	char dst[10];
    printf("%lu\n", strlcpy(dst,src,4));
	printf("%s\n",dst);
    return 0;
}
