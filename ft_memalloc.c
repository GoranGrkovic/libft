/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gogrkovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 03:45:48 by gogrkovi          #+#    #+#             */
/*   Updated: 2018/11/22 14:16:29 by gogrkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	unsigned char	*str;
	size_t			i;

	i = -1;
	if (!(str = malloc(size)))
		return (NULL);
	while (++i < size)
		str[i] = 0;
	return ((void *)str);
}
