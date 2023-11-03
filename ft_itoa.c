/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:24:52 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/03 21:05:12 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size_counter(int nbr)
{
	int i;
	i = 0;
	if(nbr < 0)
		i = 1;
	while(nbr)
	{
		nbr = nbr/10;
		i++;
	}
	return i;
}
char	*ft_itoa(int nbr)
{
	char *ptr;
	int size = size_counter(nbr);
	ptr = (char *)malloc(size + 1);
	if(ptr == NULL)
		return ptr;
	ptr[size] = '\0';
	if(nbr < 0)
	{
		ptr[0] = '-';
		nbr = -nbr;
	}
	while(nbr)
	{
		ptr[size-1] = nbr%10 + 48;
		nbr = nbr / 10;;
		size--;
	}
	return ptr;
}
