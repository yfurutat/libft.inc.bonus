/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:36:13 by yuske             #+#    #+#             */
/*   Updated: 2022/11/11 07:50:49 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nustr;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	nustr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!nustr)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		nustr[i] = s1[i];
		i++;
	}
	while (s2[j])
		nustr[i++] = s2[j++];
	nustr[i] = 0;
	return (nustr);
}
