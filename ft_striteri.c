/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:36:41 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/03 17:36:45 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void fct(unsigned int i, char *c)
{
    puts(c);
}
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;
	i = 0;
	while (s[i])
	{
	    (*f)(i,&s[i]);
		i++;
	}
}
int main()
{
    void (*f)(unsigned int,char) = &fct;
    ft_striteri("hhhhhh",f);
}
