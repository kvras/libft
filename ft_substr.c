/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:46:01 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/04 14:02:06 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, int start, int len)
{
	int		i;
	char	*ptr;

	i = 0;
	if (start >= ft_strlen(str))
		return ft_strdup("");
	if (ft_strlen(str + start) < len)
		ptr = (char *)malloc(ft_strlen(str + start) + 1);
	else
		ptr = (char *)malloc(len + 1);
	if (ptr == NULL)
		return (0);
	while (i<len && (str+start)[i])
	{
		ptr[i] = (str+start)[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
//int main()
//{
//	printf("%s", ft_substr("mohamedamine", 8, 6));
//}