/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:00:02 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/03 17:27:31 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int,char))
{
	unsigned int i;
	char *ptr;
	int len;
	i = 0;
	len = ft_strlen(s);
	ptr = (char *)malloc(len + 1);
	ptr[len] = '\0';
	while (i < len)
	{
		ptr[i] = (*f)(i,s[i]);
		i++;
	}
	return ptr;
}
