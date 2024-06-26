/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:09:55 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/06 21:52:03 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			j;
	unsigned char	*string;
	unsigned char	*find;

	string = (unsigned char *)haystack;
	find = (unsigned char *)needle;
	i = 0;
	if (!(*needle))
		return ((char *)haystack);
	while (*string && i < len)
	{
		j = 0;
		if (string[i] == find[j])
		{
			while (string[i + j] == find[j] && i + j < len)
				j++;
			if (!find[j])
				return ((char *)(string + i));
		}
		i++;
	}
	return (NULL);
}
/*int main()
{
	char *str = "amedah";
	char *find = "ah";
	printf("%s\n", ft_strnstr(str, find, 6));
}*/
