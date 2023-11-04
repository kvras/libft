/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:00:02 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/03 23:28:08 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int,char))
{
	unsigned int i;
	char *ptr;
	int len;
	i = 0;
	len = ft_strlen((char *)s);
	ptr = (char *)malloc(len + 1);
	if(ptr == NULL)
		return NULL;
	ptr[len] = '\0';
	while (i < len)
	{
		ptr[i] = (*f)(i,s[i]);
		i++;
	}
	return ptr;
}
