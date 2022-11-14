/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:46:07 by yuske             #+#    #+#             */
/*   Updated: 2022/11/11 22:49:48 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	nbr_of_nodes;

	nbr_of_nodes = 0;
	while (lst)
	{
		lst = lst->next;
		nbr_of_nodes++;
	}
	return (nbr_of_nodes);
}
