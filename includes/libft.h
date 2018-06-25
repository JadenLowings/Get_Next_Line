/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlowing <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 10:00:31 by jlowing           #+#    #+#             */
/*   Updated: 2018/06/04 13:37:11 by jlowing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				ft_putchar(char c);
int					ft_atoi(const char *str);
void				ft_bzero(void *a, size_t j);
int					ft_isalnum(int j);
int					ft_isalpha(int j);
int					ft_isascii(int j);
int					ft_isdigit(int j);
void				*ft_memalloc(size_t size_of);
void				*ft_memchr(const void *str, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t j);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *a, int j, size_t b);
char				*ft_strcat(char *dst, const char *src);
char				*ft_strchr(const char *s, int c);
int					ft_strcmp(const char *s1, const char *s2);
void				ft_putendl_fd(char const *a, int fd);
void				ft_putstr_fd(char const *a, int fd);
void				ft_putchar_fd(char j, int fd);
void				ft_putnbr(int nb);
void				ft_putendl(char const *a);
void				ft_putstr(char const *a);
char				*ft_itoa(int j);
char				**ft_strsplit(char const *a, char c);
char				*ft_strtrim(char const *a);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
int					ft_strnequ(char const *s1, char const *s2, size_t j);
int					ft_strequ(char const *s1, char const *s2);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strmap(char const *a, char (*b)(char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_striter(char *a, void (*b)(char *));
void				ft_strclr(char *a);
void				ft_strdel(char **jd);
char				*ft_strnew(size_t size_of);
void				ft_memdel(void **jd);
int					ft_toupper(int j);
int					ft_tolower(int j);
int					ft_num_places(int num);
int					ft_strncmp(const char *s1, const char *s2, size_t j);
char				*ft_strncpy(char *s1, const char *s2, size_t n);
void				*ft_memcpy(void *str1, const void *str2, size_t n);
void				*ft_memccpy(void *dst, const void *src, int j, size_t n);
size_t				ft_strlen(const char *a);
char				*ft_strdup(const char *src);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncat(char *dest, const char *src, int n);
size_t				ft_min(size_t a, size_t b);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strrchr(const char *src, int c);
char				*ft_strstr(const char *max, const char *min);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t j);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alt, void (*delt)(void *, size_t));
void				ft_lstdel(t_list **alt, void (*delt)(void *, size_t));
void				ft_lstadd(t_list **alt, t_list *new_intersection);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
int					ft_isprint(int j);

#endif
