/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:18:16 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/10 22:38:12 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str_l, const char *str_s, size_t len)
{
	size_t	len_s;

	len_s = ft_strlen(str_s);
	if (*str_s == '\0')
		return ((char *)str_l);
	else if (len == 0 || *str_l == '\0')
		return (NULL);
	while (len >= len_s && *str_l)
	{
		if (!(ft_strncmp((char *)str_l, (char *)str_s, len_s)))
			return ((char *)str_l);
		str_l++;
		len--;
	}
	return (NULL);
}
