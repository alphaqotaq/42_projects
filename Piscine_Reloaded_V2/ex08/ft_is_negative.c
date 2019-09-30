/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 15:56:31 by kmila             #+#    #+#             */
/*   Updated: 2019/09/03 16:03:33 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n <= 2147483647 && n >= 0)
		ft_putchar('P');
	else if (n >= -2147483648 && n < 0)
		ft_putchar('N');
}