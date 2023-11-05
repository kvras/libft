/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguiji <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:34:02 by miguiji           #+#    #+#             */
/*   Updated: 2023/11/05 22:46:55 by miguiji          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int word_count(char *original,char c)
{
    int i;
    i = 0;
    while(*original)
    {
        while(*original == c && *original)
            original++;
        if(*original)
            i++;
        while(*original != c && *original)
            original++;
    }
    return i;
}
void letters_count(char *original, char c, int *end, int *start)
{
    while(original[*end] == c && original[*end])
        (*end)++;
    *start = *end;
    while(original[*end] != c && original[*end])
        (*end)++;
}
int alloc_move(char *original,char c,char **D_arr,int *i)
{
    int start;
    int end;
    start = 0;
    end = 0;
    while(*i < word_count(original,c))
    {
        letters_count(original,c,&end,&start);
        D_arr[*i] = (char *)malloc(end-start+1);
        if(D_arr[*i] == NULL)
            return 0;
        memmove(D_arr[*i],&original[start],end-start);
        D_arr[*i][end-start] = '\0';
        (*i)++;
    }
    return 1;
}
char **ft_split(char *original,char c)
{
    int i;
    i = 0;
    char **D_arr = malloc((word_count(original,c)+1)*sizeof(char *));
    if(D_arr == NULL)
        return D_arr;
    D_arr[word_count(original,c)] = NULL;
    if(!(alloc_move(original,c,D_arr,&i)))
    {
        while(i > 0)
        {
            free(D_arr[i]);
            i--;
        }
        free(D_arr);
        return NULL;
    }
    return D_arr;
}

/*int main()
{
	int i = 0;
    char **results = ft_split("ahmed ali amine ayman. . . .   ",' ');
    while(results[i])
    {
        printf("%s",results[i]);
        i++;
    }
    return 0;
}*/
