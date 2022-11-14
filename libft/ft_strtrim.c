/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:35:51 by yuske             #+#    #+#             */
/*   Updated: 2022/11/11 08:15:52 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// while ((s1[i] >= '\t' && s1[i] <= '\r') || s1[i] == ' ')
	// 	i++;
	// while ((s1[end] >= 9 && s1[end] <= 13) || s1[end] == 32)
	// 	end--;
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	i;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[end]))
		end--;
	trimmed = ft_substr(s1, i, end - i + 1);
	return (trimmed);
}
