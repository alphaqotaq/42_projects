/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 13:54:03 by kmila             #+#    #+#             */
/*   Updated: 2019/09/23 15:30:58 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char *b1;

	b1 = (unsigned char *)b;
	while (n-- > 0)
	{
		*(b1++) = (unsigned char)c;
	}
	return (b);
}
