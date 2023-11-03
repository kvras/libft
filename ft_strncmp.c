/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:19:19 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/03 19:21:14 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	i = 0;
	while(i < n && s1[i] && s2[i])
	{
		if(s1[i]-s2[i] != 0)
			return (s1[i] - s2[i]);
		i++;
	}
	if(s1[i])
		return (s1[i]);
	else if(s2[i])
		return(-s2[i]);
	return (0);
}
