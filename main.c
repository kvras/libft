/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:34:51 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/01 15:48:38 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main()
{
    const char src[6];
    char dst[3];
    printf("%lu\n",sizeof(dst));
    printf("%lu\n", ft_strlcpy(dst,src,sizeof(dst)));
	printf("%s\n",dst);
    return 0;
}
