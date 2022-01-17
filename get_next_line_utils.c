/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 23:02:54 by wyu               #+#    #+#             */
/*   Updated: 2022/01/18 02:06:27 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t count)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = 0;
	while (src[i] && i + 1 < count)
	{
		dest[i] = src[i];
		i++;
	}
	if (count)
		dest[i] = '\0';
	return (src_len);
}

char	*ft_strjoin_gnl(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1)
		return (ft_strdup(s2));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_s = (char *)malloc((s1_len + s2_len + 1));
	if (!new_s)
	{
		free((void *)s1);
		return (NULL);
	}
	ft_strlcpy(new_s, s1, s1_len + 1);
	ft_strlcpy(new_s + s1_len, s2, s2_len + 1);
	free((void *)s1);
	return (new_s);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	s1_len;

	if (!s1)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2 = (char *)malloc(s1_len + 1);
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1, s1_len + 1);
	return (s2);
}
