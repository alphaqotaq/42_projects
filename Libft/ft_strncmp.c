/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 15:53:11 by kmila             #+#    #+#             */
/*   Updated: 2019/09/10 11:45:36 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 == *s2 && *s1 && *s2 && n--)
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2 && n != 0)
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	else
		return (0);
}
