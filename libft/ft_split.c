/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:36:34 by yuske             #+#    #+#             */
/*   Updated: 2022/11/11 07:57:17 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t len)
{
	char	*buf;

	buf = (char *)malloc(sizeof(char) * (len + 1));
	if (!buf)
		return (NULL);
	ft_memcpy(buf, s, len);
	buf[len] = '\0';
	return (buf);
}

static char	**re_processor(char const *s, char c, char **re)
{
	char const	*start;
	char const	*end;
	size_t		i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s != c && *s)
				s++;
			end = s;
			re[i] = ft_strndup(start, end - start);
			i++;
		}
		else
			s++;
	}
	re[i] = NULL;
	return (re);
}

static size_t	word_counter(const char *s, char c)
{
	size_t	word;

	word = 0;
	while (*s)
	{
		if (*s != c)
		{
			word++;
			while (*s != c && *s)
				s++;
		}
		s++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**re;
	size_t	words;

	if (!s)
		return (NULL);
	words = word_counter(s, c);
	re = malloc(sizeof(char *) * (words + 1));
	if (!re)
		return (NULL);
	re = re_processor(s, c, re);
	if (!re)
		free(re);
	return (re);
}
