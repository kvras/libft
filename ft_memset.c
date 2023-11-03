/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:41:00 by miguiji           #+#    #+#             */
/*   Updated: 2023/10/31 18:04:20 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memset(void *str, int c, size_t len)
{
	unsigned int i;
	i = 0;
	void *str2;
	str2 = str;
	while(i < len)
	{
		*((char *)str2) = c;
		str2++;
		i++;
	}
	return str;
}
