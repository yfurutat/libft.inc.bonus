/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:24:47 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/08 12:05:14 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dchr;
	unsigned char	*schr;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	dchr = (unsigned char *)dest;
	schr = (unsigned char *)src;
	i = 0;
	if (dchr <= schr)
	{
		while (i < n)
		{
			dchr[i] = schr[i];
			i++;
		}
	}
	else
	{
		while (i < n--)
			dchr[n] = schr[n];
	}
	return (dchr);
}
