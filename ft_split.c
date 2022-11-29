/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:16:21 by marmonte          #+#    #+#             */
/*   Updated: 2022/11/29 16:21:54 by marmonte         ###   ########.fr       */
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
	int		start;
	int		end;
	char	**aux;

	end = count_words(s, c);
	aux = (char **)malloc(sizeof(char *) * (end + 1));
	if (!aux)
		return (0);
	start = 0;
	i = 0;
	while (start < end)
	{
		j = 0;
		while (s[i] != '\0' && s[i] == c)
			i++;
		while (s[j + i] != '\0' && s[j + i] != c)
			j++;
		aux[start++] = ft_substr(s, i, j);
		i += j;
	}
	aux[end] = '\0';
	return (aux);
}

// int main (int argc, char **argv)
// {
// 	char **ret;
// 	int i = 0;

// 	ret = ft_split(argv[1], ' ');
// 	while (ret[i])
// 		printf("%s\n", ret[i++]);
// }
