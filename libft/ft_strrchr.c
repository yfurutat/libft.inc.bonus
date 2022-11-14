/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:18:01 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/10 22:28:13 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*re;
	char	*s2;
	int		end;

	re = NULL;
	s2 = (char *)s;
	end = ft_strlen(s);
	while (end >= 0)
	{
		if (s2[end] == (char)c)
		{
			re = &s2[end];
			return (re);
		}
		end--;
	}
	return (NULL);
}
