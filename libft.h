#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_strlen(const char *s);
int		ft_isprint(int c);
int		ft_atoi(const char *str);
char	*strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
size_t	strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*strrchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
