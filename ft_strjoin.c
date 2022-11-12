/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 22:44:51 by marvin            #+#    #+#             */
/*   Updated: 2022/11/12 22:44:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
    char    *join;
    int     i;
    int     a;

    i = 0;
    if (!s1 || !s2)
        return (0);
    join = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!join)
        return (NULL);
    while (s1[i] && s2[i])
        join[i++] = s1[a++] + s2[a++]; 
    join[i] = '\0'
    return (join);
}
