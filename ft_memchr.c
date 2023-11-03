/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:33:34 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/01 20:18:43 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str,int c, size_t n)
{
	size_t i;
	i = 0;
	while(i < n)
	{
		if (((unsigned char *)str)[i] == c)
			return (unsigned char *)str+i;
		i++;
	}
	return NULL;
}
int main()
{
	char *str="redrebels";
	printf("%s\n",ft_memchr(str,'d',5));
}
