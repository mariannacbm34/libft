/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:05:42 by marmonte          #+#    #+#             */
/*   Updated: 2022/11/03 16:25:49 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	d_size;
	size_t	s_size;
	size_t	i;

	i = 0;
	d_size = ft_strlen(dest);
	s_size = ft_strlen(src);
	if (n == 0 || n <= d_size)
		return (s_size + n);
	while (src[i] && i < n - d_size - 1)
	{
		dest[d_size + i] = src[i];
		i++;
	}
	dest[d_size + i] = '\0';
	return (d_size + s_size);
}
