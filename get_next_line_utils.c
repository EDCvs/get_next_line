/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 10:30:54 by ichimvis          #+#    #+#             */
/*   Updated: 2026/11/25 13:41:54 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, const char *s2)
{
    char *output;
    char *temp;

    if (!s1 || !s2)
        return NULL;
    
    output = malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!output)
    {
        free(s1);
        return NULL;
    }
    temp = output;
    while (*s1)
        *temp++ = *s1++;
    while (*s2)
        *temp++ = *s2++;
    *temp = '\0';
    free(s1);
    return output;
}


void ft_bzero(void *s, size_t n)
{
    char *str;
    size_t i;
    
    str = (char *)s; 
    i = 0;
    while (i < n)
    {
        str[i] = '\0';
        i++;
    }
}
void ft_calloc(size_t nmemb, size_t size)
{
    char *res;

    res = malloc(nmemb * size);
    if (!res)
        return NULL;
    ft_bzero(res, nmemb * size);
    return (res);
}
