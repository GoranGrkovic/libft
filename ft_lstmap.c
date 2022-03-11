/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gogrkovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 17:07:40 by gogrkovi          #+#    #+#             */
/*   Updated: 2018/12/11 11:14:37 by gogrkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*li;
	t_list		*first;
	t_list		*current;

	first = NULL;
	while (lst)
	{
		if (!(li = ft_lstnew(lst->content, lst->content_size)))
			return (NULL);
		li = (*f)(lst);
		if (!first)
		{
			first = li;
			current = first;
			first->next = NULL;
		}
		else
		{
			current->next = li;
			current = li;
			li->next = NULL;
		}
		lst = lst->next;
	}
	return (first);
}
