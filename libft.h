/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:03:20 by marmonte          #+#    #+#             */
/*   Updated: 2022/11/15 12:31:48 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
	size_t			content_size;			
}	t_list;

/*Parte 1*/
int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int arg);
int		ft_isalpha(int arg);
int		ft_isascii(int arg);
int		ft_isdigit(int arg);
int		ft_isprint(int arg);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
int		ft_strlcpy(char *dest, char *src, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_tolower(int arg);
int		ft_toupper(int arg);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
/*Parte 2*/
char	*ft_substr(const char *str, unsigned int start, size_t len);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_strjoin(const char *s1, const char *s2);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
#endif
