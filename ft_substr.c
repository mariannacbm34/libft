/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:29:31 by marmonte          #+#    #+#             */
/*   Updated: 2022/11/10 16:33:43 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int				i;
	void			*sub;
	unsigned int	size_len;

	if (!s) 
		return (0);
	if (start >= len)
		len = ft_strlen(s);
	else if ()
	sub = malloc(sizeof(char) * (len - start))


}
