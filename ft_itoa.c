/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:54:00 by marmonte          #+#    #+#             */
/*   Updated: 2022/11/21 17:48:30 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbr_words(int n)
{
	int	len;

	len = 0;
	while (n)
	{
		if (n < 0)
		{
			n = n * -1;
			len++;
		}
		else if (n > 0)
		{
			n = n / 10;
			len++;
		}
		return (0);
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
	if (n == -2147483648)
		return (ft_strdup(n));
	else if (n <= 0)
	{
		n = n * -1;
		return (ft_strdup(n));
	}
	else if (n > 9)
	{
		n = n 
	}

}
