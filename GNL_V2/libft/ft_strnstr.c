/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 16:33:29 by kmila             #+#    #+#             */
/*   Updated: 2019/09/10 11:34:11 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*haycpy;
	const char	*needcpy;
	int			lencpy;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len)
	{
		lencpy = len;
		haycpy = haystack;
		needcpy = needle;
		while (*haystack == *needcpy && *haystack && *needcpy && lencpy--)
		{
			haystack++;
			needcpy++;
		}
		if (!*needcpy)
			return ((char *)haycpy);
		haystack = haycpy + 1;
		len--;
	}
	return (NULL);
}
