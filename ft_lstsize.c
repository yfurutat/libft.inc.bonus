/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:46:07 by yuske             #+#    #+#             */
/*   Updated: 2022/11/14 14:40:45 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	nbr_nodes;

	nbr_nodes = 0;
	while (lst)
	{
		lst = lst->next;
		nbr_nodes++;
	}
	return (nbr_nodes);
}
