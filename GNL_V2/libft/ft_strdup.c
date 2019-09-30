/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:51:13 by kmila             #+#    #+#             */
/*   Updated: 2019/09/18 13:17:18 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*s1;
	char	*copy;

	i = 0;
	copy = (char *)src;
	while (copy[i])
		i++;
	if (!(s1 = (char *)malloc((i + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (copy[i])
	{
		s1[i] = copy[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
