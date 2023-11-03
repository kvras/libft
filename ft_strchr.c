/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:05:09 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/01 18:18:32 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(char *str,int c)
{
	char ptr;
	ptr = NULL;
	while(*str)
	{
		if (*str == c)
			return (ptr = str);
		str++;
	}
	return (NULL);
}
