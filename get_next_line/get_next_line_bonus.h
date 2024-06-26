/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstefano <mstefano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:19:17 by mstefano          #+#    #+#             */
/*   Updated: 2024/06/07 17:27:46 by mstefano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>

# ifndef BUFFER_SIZE 
#  define BUFFER_SIZE 42
# endif

char	*ft_strchr2(const char *s, int c);
size_t	ft_strlen2(const char *s);
char	*ft_strjoin2(char *s1, char *s2);
void	*ft_memset2(void *b, int c, size_t len);
void	*ft_calloc2(size_t count, size_t size);
char	*get_next_line(int fd);
char	*read_line(int fd, char *line);
char	*found_newline(char *buffer);
char	*after_newline(char *buffer);

#endif
