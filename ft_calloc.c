/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:46:07 by yfurutat          #+#    #+#             */
/*   Updated: 2022/11/21 14:33:31 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//13L
//after calloc, make sure to free allocated memory heap in main
//need we free if allocation is failed?
void	*ft_calloc(size_t nbr, size_t size)
{
	void	*mem;
	size_t	mem_sum;

	if (nbr == 0 || size == 0)
		ft_calloc(1, 1);
	mem_sum = nbr * size;
	if (mem_sum >= SIZE_MAX || nbr > SIZE_MAX / 10 || size > SIZE_MAX / 10)
		return (NULL);
	mem = malloc(mem_sum);
	if (!mem)
		return (NULL);
	ft_bzero(mem, mem_sum);
	return (mem);
}
