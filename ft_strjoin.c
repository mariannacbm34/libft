/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:18:17 by marmonte          #+#    #+#             */
/*   Updated: 2022/11/16 14:18:17 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*join;
	int		i;
	int		a;

	join = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!join)
		return (NULL);
	i = -1;
	while (s1[++i])
		join[i] = s1[i];
	a = -1;
	while (s2[++a])
		join[i + a] = s2[a];
	join[i + a] = '\0';
	return (join);
}

// #include "libft.h"

// char	*ft_strjoin(const char *s1, const char *s2)
// {
// 	char	*str;
// 	size_t	len;
// 	int		i;
// 	int		k;

// 	len = ft_strlen(s1) + ft_strlen(s2) + 1;
// 	str = (char *)malloc(sizeof(char) * len);
// 	if (!str)
// 		return (NULL);
// 	i = 0;
// 	while (s1[i])
// 	{
// 		str[i] = s1[i];
// 		i++;
// 	}
// 	k = 0;
// 	while (s2[k])
// 	{
// 		str[i + k] = s2[k];
// 		k++;
// 	}
// 	str[i + k] = '\0';
// 	return (str);
// }
