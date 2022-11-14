/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:37:07 by yuske             #+#    #+#             */
/*   Updated: 2022/11/11 07:43:47 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	figure(long int n)
{
	int	i;

	i = 0;
	if (!n)
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*toa;
	long int	nbr;
	size_t		i;

	nbr = n;
	i = figure(nbr);
	toa = (char *)malloc(sizeof(char) * (i + 1));
	if (!toa)
		return (NULL);
	if (n < 0)
		nbr *= -1;
	toa[i] = '\0';
	while (i--)
	{
		toa[i] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		toa[0] = '-';
	return (toa);
}
