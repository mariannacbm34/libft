/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:29:31 by marmonte          #+#    #+#             */
/*   Updated: 2022/11/09 12:30:57 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char        *sub;
    size_t      i;
    unsigned    strlen;

    strlen = ft_strlen(str);
    if (start >= strlen)
        sub = malloc(1);
    else if (len >= strlen)
        sub = (char *)malloc(sizeoof(char) * (strlen - start + 1));
    else
        sub = (char *)malloc(sizeoof(char) * (len + 1));
    if (!sub)
        return (NULL);
    i = 0;
    while (i < len && strlen >= start)
    {
        sub[i] = str[start];
        i++;
        start++;
    }
    sub[i] = '\0';
    return (sub);
}
