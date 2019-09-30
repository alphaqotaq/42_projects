/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 13:35:24 by kmila             #+#    #+#             */
/*   Updated: 2019/09/11 16:23:56 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst1;
	char	*src1;
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	dst1 = (char *)dst;
	src1 = (char *)src;
	if (src1 < dst1)
	{
		while (len-- > 0)
			dst1[len] = src1[len];
	}
	else
		while (i < len)
		{
			dst1[i] = src1[i];
			i++;
		}
	return (dst1);
}
