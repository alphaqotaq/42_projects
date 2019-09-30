/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:24:57 by kmila             #+#    #+#             */
/*   Updated: 2019/09/11 16:05:11 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		givelen(char const *s)
{
	int	i;
	int lens;

	i = 0;
	lens = ft_strlen((char *)s);
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
		i++;
	lens--;
	while ((s[lens] == ' ' || s[lens] == '\n' || s[lens] == '\t')
			&& s[lens] && lens)
	{
		i++;
		lens--;
	}
	lens = ft_strlen((char *)s);
	if (lens - i <= 0)
		return (0);
	return (lens - i);
}

static char		*result(char const *s)
{
	int		i;
	int		j;
	char	*res;
	int		len;

	i = 0;
	j = 0;
	len = givelen(s);
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
		i++;
	while (s[i] && len)
	{
		res[j] = s[i];
		j++;
		i++;
		len--;
	}
	res[j] = '\0';
	return (res);
}

char			*ft_strtrim(char const *s)
{
	if (s == NULL)
		return (NULL);
	if (s && *s != '\0')
		return (result(s));
	return ("");
}
