/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:54:00 by marmonte          #+#    #+#             */
/*   Updated: 2022/11/21 15:23:33 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbr_words(int n)
{
	int	len;

	len = 0;
	while (n)
	{
		if (n <= 0)
		{
			n *= -1;
			len++;
		}
		else if (n > 0)
		{
			n /= 10;
			len++;
		}
		n++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nbr;

	nbr = n;
	len = nbr_words(nbr);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (nbr <= 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr != 0)
		str[len] = (nbr * 10) + str[len] - 48;
	len--;
	str[len] = '\0';
	return (str);
}
