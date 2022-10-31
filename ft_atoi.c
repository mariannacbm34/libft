/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:48:06 by marmonte          #+#    #+#             */
/*   Updated: 2022/10/31 15:30:03 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	result;
	int	sinal;

	sinal = 1;
	result = 0;
	while (*str <= 32)
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sinal = -1;
		str++;
	}
	while (*str && (*str >= 48 && *str <= 57))
	{
		result = (result * 10) + *str - 48;
		str++;
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
