/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:33:34 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/04 15:35:06 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t i;
	i = 0;
	unsigned char *ptr = (unsigned char *)str;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return &ptr[i];
		i++;
	}
	return (NULL);
}

//int main()
//{
//	char *str="redrebels";
//	printf("%s\n", ft_memchr(str, 'd', 5));
//}
