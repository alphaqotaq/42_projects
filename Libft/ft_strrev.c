/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 19:45:19 by kmila             #+#    #+#             */
/*   Updated: 2019/09/11 13:48:33 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		scndi;
	char	swap;

	i = 0;
	scndi = 0;
	while (*(str + i) != '\0')
	{
		i = i + 1;
	}
	while (scndi < i / 2)
	{
		swap = *(str + scndi);
		*(str + scndi) = str[i - 1 - scndi];
		str[i - 1 - scndi] = swap;
		scndi = scndi + 1;
	}
	return (str);
}
