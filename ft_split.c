/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
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
{

}
