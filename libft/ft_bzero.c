/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:15:22 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/11 07:29:08 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_bzero(void *s, size_t n)
// {
// 	unsigned int	i;
// 	char			*b;

// 	i = 0;
// 	b = s;
// 	while (i < n)
// 	{
// 		b[i] = 0;
// 		i++;
// 	}
// }

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}