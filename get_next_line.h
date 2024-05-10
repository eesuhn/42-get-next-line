/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:13:18 by yilim             #+#    #+#             */
/*   Updated: 2024/05/09 21:13:18 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
char	*read_line(int fd, char *line);
char	*join_line(char *line, char *buf);
char	*get_res(char *line);
char	*next_line(char *line);
size_t	ft_strlen(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
int		check_end_index(char *str);

#endif
