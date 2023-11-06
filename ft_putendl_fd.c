/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:48:42 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/03 21:25:01 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void	ft_putendl_fd(char *s, int fd)
{
	char	c;

	c = '\n';
	ft_putstr_fd(s, fd);
	ft_putchar_fd(c, fd);
}
