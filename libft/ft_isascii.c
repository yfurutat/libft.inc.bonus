/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:15:53 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/03 12:52:01 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_isascii(int c)
// {
// 	if (c >= 0 && c <= 127)
// 		return (1);
// 	else
// 		return (0);
// }

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}