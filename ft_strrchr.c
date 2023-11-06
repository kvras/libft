/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:10:35 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/04 15:18:50 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int start;
	start = ft_strlen(str);
	while (start >= 0)
	{
		if (str[start] == c)
			return (char *)&str[start];
		start -  - ;
	}
	return (NULL);
}
