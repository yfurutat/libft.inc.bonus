/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:49:24 by yuske             #+#    #+#             */
/*   Updated: 2022/11/13 17:00:35 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*start;
	// t_list	*tail;
	
	if (!f || !del)
		return (NULL);
	if (!(malloc (sizeof(lst))))
		return (NULL);
	start = NULL;
	// if (!(new = ft_lstnew(f(lst->content))))
	// 	return (NULL);
	// ft_lstadd_back(&head, new);
	// tail = head;
	// lst = lst->next;
	while (lst)
	{
		if (!(new = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		ft_lstadd_back(&start, new);
		// tail = tail->next;
		lst = lst->next;
	}
	return (start);
}



// t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
// {
// 	t_list	*result;
// 	t_list	*tmpresult;
// 	t_list	*tmplst;

// 	if (lst == NULL || f == NULL)
// 		return (NULL);
// 	tmplst = f(lst);
// 	if ((result = ft_lstnew(tmplst->content, tmplst->content_size)))
// 	{
// 		tmpresult = result;
// 		lst = lst->next;
// 		while (lst != NULL)
// 		{
// 			tmplst = (*f)(lst);
// 			if (!(tmpresult->next = ft_lstnew(tmplst->content,
// 										tmplst->content_size)))
// 				return (NULL);
// 			tmpresult = tmpresult->next;
// 			lst = lst->next;
// 		}
// 	}
// 	return (result);
// }
