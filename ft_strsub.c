/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gogrkovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 20:30:12 by gogrkovi          #+#    #+#             */
/*   Updated: 2018/11/22 13:39:07 by gogrkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = NULL;
	if (s)
	{
		if (!(tmp = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		while (len--)
			tmp[i++] = s[start++];
		tmp[i] = '\0';
	}
	return (tmp);
}
