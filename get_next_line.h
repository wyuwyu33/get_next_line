/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyu <wyu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 21:40:05 by wyu               #+#    #+#             */
/*   Updated: 2022/01/18 22:42:13 by wyu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif
# ifndef FD_SIZE
#  define FD_SIZE 256
# endif

// get_next_line.c
char			*get_next_line(int fd);

// get_next_line_uils.c
size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dest, const char *src, size_t count);
char			*ft_strjoin_gnl(char const *s1, char const *s2);
char			*ft_strdup(const char *s1);

#endif
