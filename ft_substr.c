/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:29:31 by marmonte          #+#    #+#             */
/*   Updated: 2022/11/14 12:54:18 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*sub;

	if (!s)
		return (0);
	else if (len > ft_strlen(s))
		len = ft_strlen(s) + 1;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	while (i < ft_strlen(s) && start < len)
		sub[i++] = s[start++];
	sub[i] = 0;
	return (sub);
}
