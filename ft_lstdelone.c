/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gogrkovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 15:00:41 by gogrkovi          #+#    #+#             */
/*   Updated: 2018/11/22 16:13:55 by gogrkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	if (!(alst || del || *alst))
		return ;
	(del((*alst)->content, (*alst)->content_size));
	free(*alst);
	*alst = NULL;
}
