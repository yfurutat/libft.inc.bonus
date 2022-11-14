/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:18:55 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/03 11:24:19 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;
	unsigned int	i;

	i = 0;
	str = (unsigned char *)s;
	chr = (unsigned char)c;
	while (i++ < n)
	{
		if (*str == chr)
			return (str);
		str++;
	}
	return (NULL);
}
