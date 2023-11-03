/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:34:02 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/03 10:29:03 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int count_words(char const *str,char c)
{
    int i = 0;
    while (*str)
    {
        while(*str == c)
            str++;
        if(*str)
            i++;
        while(*str != c && *str)
            str++;
    }
    return i;
}

static int count_letters(char *str,char c,int *j)
{
    int i = 0;
    while(str[*j] == c)
        (*j)++;
    while(str[*j] != c && str[*j])
    {
        (*j)++;
        i++;
    }
    return i;
}


char    **ft_split(char    *str,char c)
{
    int j = 0;
    int a = 0;
    int i = 0;
    char **ptr;
    ptr = (char **)malloc((count_words(str,c) + 1) * sizeof(char *));
    if (!ptr)
        return (NULL);
    while(i < count_words(str,c))
    {
        ptr[i] = (char *)malloc(count_letters(str,c,&j) + 1);
        if (!ptr[i]){
        // for (int x = i; i >= 0; i-- )
            // free(ptr[x]) // previ
            // free (ptr)
            return NULL;
        }
            // return NULL;
        memmove(ptr[i],&str[a],j-a);
        ptr[i][j]='\0';
        a = j;
        while(str[a] == c)
            a++;
        j = a;

        i++;
    }
    ptr[i] = NULL;
    return ptr;
}
int main() 
{   int i = 0;
    char **results = ft_split("ahmed ali amine ayman. . . .   ",' ');
    while(results[i])
    {
        printf("|%s|",results[i]);
        i++;
    }
    return 0;
}


