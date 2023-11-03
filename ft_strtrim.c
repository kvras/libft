/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:26:19 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/03 21:04:28 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char *str, char *set)
{
	while(*set)
	{
		if (*set == *str)
			return 1;
		set++;
	}
	return 0;
}
char *ft_strtrim(char const *str, char const *set)
{
	int i = 0;
	int start;
	while(check(&((char *)str)[i],(char *)set))
		i++;
	start = i;
	while(str[i])
		i++;
	while(check(&((char *)str)[i-1],(char *)set))
		i--;
	return ft_substr((char *)str,start,i-start+1);
}
