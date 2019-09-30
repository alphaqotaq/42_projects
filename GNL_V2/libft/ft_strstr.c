/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 16:33:29 by kmila             #+#    #+#             */
/*   Updated: 2019/09/10 11:33:47 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*haycpy;
	const char	*needcpy;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack)
	{
		haycpy = haystack;
		needcpy = needle;
		while (*haystack == *needcpy && *haystack && *needcpy)
		{
			haystack++;
			needcpy++;
		}
		if (!*needcpy)
			return ((char *)haycpy);
		haystack = haycpy + 1;
	}
	return (NULL);
}
