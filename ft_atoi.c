/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:48:06 by marmonte          #+#    #+#             */
/*   Updated: 2022/10/31 17:53:40 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	size_t	result;
	int		sinal;
	int		i;

	i = 0;
	sinal = 1;
	result = 0;
	while (str[i] && ((str[i] > 8 && str[i] < 14) || str[i] == 32))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sinal = -1;
		i++;
	}
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
		result = (result * 10) + str[i++] - 48;
	if (i > 19 || result >= 9223372036854775808ULL)
	{
		if (sinal == 1)
			return (-1);
		return (0);
	}
	return (result * sinal);
}
/*
int	main(void)
{
	char *p = "   -82764323jdsg24";
	printf("ft_function: %d\n", ft_atoi(p));
	printf("original function: %d\n", atoi(p));
	return (0);
}
*/
