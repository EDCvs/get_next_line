/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichimvis <ichimvis@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 10:30:54 by ichimvis          #+#    #+#             */
/*   Updated: 2026/11/18 14:18:25 by ichimvis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	gnl_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*gnl_strchr(const char *s, int c)
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

char	*gnl_strjoin(char *s1, const char *s2)
{
    char *output;
    char *temp;

    if (!s1 || !s2)
        return NULL;
    
    output = malloc((gnl_strlen(s1) + gnl_strlen(s2) + 1));
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

char	*gnl_substr(const char *s, size_t start, size_t len)
{
    
}

// int main (void)
// {
//     #include <stdio.h>

//     char *str = "Hello";
//     char *str2 = " World!";
//     char *str3 = gnl_strjoin(str, str2);
//     printf("%s\n", str3);
// }
