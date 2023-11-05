/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:19:23 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/03 19:22:40 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ptr1;
	unsigned char *ptr2;
	size_t i;
	i = 0;
   	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while(*ptr1 == *ptr2 && *ptr1 && *ptr2 && i < n)
	{
		ptr1++;
		ptr2++;
		i++;
	}
	if(*ptr1 != *ptr2 && i < n)
		return (*ptr1 - *ptr2);
	return (0);
}
//int main()
//{
//	char *s1="ahmea";
//	char *s2="ahme";
//	printf("%d",ft_memcmp(s1,s2,5));
//	return 0;
//}
