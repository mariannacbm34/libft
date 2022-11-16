/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:26:59 by marmonte          #+#    #+#             */
/*   Updated: 2022/11/15 15:33:28 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

char	**ft_split(char const *s, char c)
=======
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:34:11 by marvin            #+#    #+#             */
/*   Updated: 2022/11/15 19:34:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int  counter (const char *str, char c)
{
	int counter;
	int find;
	int i;

	find = 0;
	counter = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] != c && find == 0)
		{ 
			find = 1;
			counter++;
		}
		else if (str[i] == c)
			find = 0;
	}
	return (counter);
}

char	*word(const char *str, int start, int finish)

char    **ft_split(char const *s, char c)
>>>>>>> fe6cf7c4deeaec72b4dc9e5071852c36da289725
{

}
