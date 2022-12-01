/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:16:21 by marmonte          #+#    #+#             */
/*   Updated: 2022/11/30 15:58:58 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_words(const char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			word++;
			while (str[i] != c && str[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		l_words;
	int		e_words;
	char	**aux;

	e_words = count_words(s, c);
	aux = (char **)malloc(sizeof(char *) * (e_words + 1));
	if (!aux)
		return (0);
	l_words = 0;
	i = 0;
	while (l_words < e_words)
	{
		j = 0;
		while (s[i] != '\0' && s[i] == c)
			i++;
		while (s[j + i] != '\0' && s[j + i] != c)
			j++;
		aux[l_words++] = ft_substr(s, i, j);
		i += j;
	}
	aux[e_words] = '\0';
	return (aux);
}
