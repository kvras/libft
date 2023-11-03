/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:53:07 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/03 18:26:03 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int nbr,int fd)
{
	if( nbr == -2147483648)
	{
		ft_putchar_fd('-',fd);
		ft_putchar_fd('2',fd);
		nbr = 147483648;
	}
	else if (nbr < 0)
		nbr = -nbr;
	else if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10);
		ft_putnbr_fd(nbr % 10);
	}
	else
		ft_putchar_fd(nbr,fd);
}
