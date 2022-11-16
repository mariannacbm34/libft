/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:16:21 by marmonte          #+#    #+#             */
/*   Updated: 2022/11/16 14:17:15 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counter(const char *str, char c)
{
	int	counter;
	int	find;
	int	i;

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
