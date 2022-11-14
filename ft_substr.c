/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:29:31 by marmonte          #+#    #+#             */
/*   Updated: 2022/11/14 16:29:42 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*primeiro if -> se a string nao existir
  segundo if -> para retornar null quando start >= tamanho da string
  terceiro if -> somente a alocacao de memoria do proximo if, quando len for
  		maior que o tamanho da string
  quarto if -> por conta do segundo if, se ja tiver alocado nao pode entrar
  		nesse if
  while -> para passar a substring para a variavel sub, enquanto a string
  		nao acabar nem o i chegar no valor de len*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*sub;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		sub = malloc(1);
	if (len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	if (start < ft_strlen(s))
		sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	while (start <= ft_strlen(s) && i < len)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}

// #include "libft.h"

// char	*ft_substr(const char *s, unsigned int start, size_t len)
// {
// 	char	*ptr;
// 	size_t	i;
// 	size_t	j;

// 	if (!s)
// 		return (0);
// 	if (len > ft_strlen(s))
// 		len = ft_strlen(s) + 1;
// 	ptr = (char *)malloc(len + 1);
// 	if (!ptr)
// 		return (0);
// 	i = start;
// 	j = 0;
// 	while (i < ft_strlen(s) && j < len)
// 		ptr[j++] = s[i++];
// 	ptr[j] = 0;
// 	return (ptr);
// }

// int main (void)
// {
// 	char			*j;
// 	unsigned int	p;
// 	size_t			len;
// 	char			*ret;

// 	j = "abcdefg";
// 	p = 2;
// 	len = 9;
// 	ret = ft_substr(j, p, len);
// 	printf("%s\n", ret);
// 	free (ret);
// }
