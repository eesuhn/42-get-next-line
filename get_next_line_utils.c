/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yilim <yilim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 21:13:22 by yilim             #+#    #+#             */
/*   Updated: 2024/05/09 21:13:22 by yilim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	s_len;
	size_t	res_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	s_len -= start;
	res_len = (s_len * (s_len < len)) + (len * (s_len >= len)) + 1;
	res = (char *)malloc(res_len);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, res_len);
	return (res);
}

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
		((char *)s)[count++] = (unsigned char)c;
	return (s);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	res = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	s1_len = 0;
	while (s1[s1_len])
	{
		res[s1_len] = s1[s1_len];
		s1_len++;
	}
	s2_len = 0;
	while (s2[s2_len])
	{
		res[s1_len + s2_len] = s2[s2_len];
		s2_len++;
	}
	res[s1_len + s2_len] = '\0';
	return (res);
}
