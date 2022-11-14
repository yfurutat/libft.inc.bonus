/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:16:40 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/03 15:13:09 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_isprint(int c)
// {
// 	if (c >= 0x20 && c <= 0x7e)
// 		return (1);
// 	else
// 		return (0);
// }

int	ft_isprint(int c)
{
	return (c >= 0x20 && c <= 0x7E);
}

// int	ft_isprint(int c)
// {
// 	return (c >= 32 && c <= 126);
// }