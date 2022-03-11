/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gogrkovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:12:09 by gogrkovi          #+#    #+#             */
/*   Updated: 2018/11/22 16:46:18 by gogrkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*listsrc;
	t_list	*listdst;

	if (!(alst || del))
		return ;
	listsrc = *alst;
	while (listsrc)
	{
		listdst = listsrc->next;
		del(listsrc->content, listsrc->content_size);
		free(listsrc);
		listsrc = listdst;
	}
	*alst = NULL;
}
