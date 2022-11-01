/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:51:45 by marmonte          #+#    #+#             */
/*   Updated: 2022/10/28 14:50:20 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
    int	i;

	i = 0;
	while ((char *)s[i] && (char *)s[i] != c)
        i++;
    if ((char *)s[i] == c)
        return ((char *)s[i]);
	return (0);
}
