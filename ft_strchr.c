/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:05:09 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/06 21:31:52 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (i <= ft_strlen(str))
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
