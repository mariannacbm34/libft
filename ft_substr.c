/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:29:31 by marmonte          #+#    #+#             */
/*   Updated: 2022/11/10 16:33:43 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int    i;
    char            *sub;

    if (!s)
        return ;
    else if (len > ft_strlen(s))
        len = ft_strlen(s) + 1;
    sub  = (char *)malloc(len);
    if (!sub)
        return (NULL);
    while (i < len)
    {
        sub[i] = s[start];
        i++;
        start++; 
    }
    return (0);
        
}
