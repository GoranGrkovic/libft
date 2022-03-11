/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gogrkovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:51:50 by gogrkovi          #+#    #+#             */
/*   Updated: 2018/12/05 10:33:36 by gogrkovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printbit(unsigned char octet)
{
	int i;
	int oct;

	oct = octet;
	i = 128;
	if (octet)
	{
		while (i != 0)
		{
			if (i <= octet)
			{
				write(1, "1", 1);
				octet = octet % i;
			}
			else
				write(1, "0", 1);
			i = i / 2;
		}
	}
}
