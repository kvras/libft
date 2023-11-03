/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:46:01 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/02 15:50:13 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *str,int start,int len)
{
	char *ptr = (char *)malloc(len + 1);
	if (ptr == NULL)
		return NULL;
	while(i<len)
	{
		ptr[i] = (str+start)[i];
		i++;
	}
	ptr[len] = '\0';
	return ptr;
}
