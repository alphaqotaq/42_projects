/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 12:11:58 by kmila             #+#    #+#             */
/*   Updated: 2019/09/05 11:35:46 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_help.h"

int			check(int amount)
{
	if (amount == 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (amount > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	return (0);
}

int			main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[81];

	if (check(argc))
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (1);
	ret = read(fd, buf, 80);
	while (ret)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
		ret = read(fd, buf, 80);
	}
	if (close(fd) == -1)
		return (1);
	return (0);
}
