/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:25:00 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/03 11:25:46 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*buf;
	size_t	i;

	i = 0;
	buf = (char *)s;
	if (!n)
		return (buf);
	while (i < n)
	{
		buf[i] = c;
		i++;
	}
	return (buf);
}
