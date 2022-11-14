/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 22:44:51 by marvin            #+#    #+#             */
/*   Updated: 2022/11/14 15:01:39 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*join;
	int		i;
	int		a;

	i = 0;
	if (!s1 || !s2)
		return (0);
	join = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!join)
		return (NULL);
	a = 0;
	while (s1[i])
		join[i++] = s1[a];
	i = 0;
	while (s2[i])
	{
		join[i + a] = s2[a];
		i++;
	}
	join[i] = '\0';
	return (join);
}
