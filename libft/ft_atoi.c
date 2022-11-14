/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:08:45 by yuske             #+#    #+#             */
/*   Updated: 2022/11/11 23:04:11 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	long_check(int flg, long nbr, char c)
{
	long	tmp;

	tmp = LONG_MAX / 10;
	if (flg == 1)
		c += 1;
	if (tmp < nbr || (tmp == nbr && LONG_MAX % 10 + 1 < c - '0'))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long	nbr;
	int		flg;

	nbr = 0;
	flg = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			flg *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (flg == 1 && long_check(flg, nbr, *str))
			return ((int)(LONG_MAX));
		if (flg == -1 && long_check(flg, nbr, *str))
			return ((int)(LONG_MIN));
		nbr = (nbr * 10) + (*str - '0');
		str++;
	}
	nbr *= flg;
	return ((int)nbr);
}
