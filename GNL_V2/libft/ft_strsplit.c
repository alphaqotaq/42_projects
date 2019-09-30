/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 14:36:49 by kmila             #+#    #+#             */
/*   Updated: 2019/09/11 16:03:43 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(char const *s, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		res++;
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
	}
	return (res);
}

static int	countletters(const char *s, char c)
{
	int res;

	res = 0;
	while (*s != c && *s)
	{
		s++;
		res++;
	}
	return (res);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		i;
	int		wrds;

	i = 0;
	if (s == NULL)
		return (NULL);
	wrds = countwords(s, c);
	if (!(res = (char **)malloc((wrds + 1) * sizeof(char *))))
		return (NULL);
	while (wrds--)
	{
		while (*s == c && *s != '\0')
			s++;
		res[i] = ft_strsub((const char *)s, 0,
				countletters((const char *)s, c));
		if (res[i] == NULL)
			return (NULL);
		s = s + countletters(s, c);
		i++;
	}
	res[i] = NULL;
	return (res);
}
