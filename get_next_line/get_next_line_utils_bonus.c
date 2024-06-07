/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstefano <mstefano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:19:57 by mstefano          #+#    #+#             */
/*   Updated: 2024/06/07 17:27:19 by mstefano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr2(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

size_t	ft_strlen2(const char *s)
{
	int	count;

	count = 0;
	if (!s)
		return (0);
	while (s[count])
		count++;
	return (count);
}

char	*ft_strjoin2(char *s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	str = ft_calloc2(ft_strlen2(s1) + ft_strlen2(s2) + 1, sizeof(char));
	while (s1 && s1[i] != 0)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j] != 0)
	{
		str[i + j] = s2[j];
		j++;
	}
	str[ft_strlen2(s1) + ft_strlen2(s2)] = '\0';
	if (s1)
		free(s1);
	return (str);
}

void	*ft_calloc2(size_t count, size_t size)
{
	size_t	total;
	void	*ptr;

	total = count * size;
	ptr = malloc(total);
	if (ptr != NULL)
		ft_memset2(ptr, 0, total);
	return (ptr);
}

void	*ft_memset2(void *b, int c, size_t len)
{
	unsigned char	*a;

	a = (unsigned char *)b;
	while (len > 0)
	{
		*a = (unsigned char)c;
		a++;
		len--;
	}
	return (b);
}
