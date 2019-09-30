/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 15:46:51 by kmila             #+#    #+#             */
/*   Updated: 2019/09/26 15:55:19 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		fill_line(char **line, char **str, int fd)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = str[fd];
	if ((str[fd][i]) == '\0')
	{
		ft_strdel(&str[fd]);
		return (0);
	}
	while (str[fd][i] && str[fd][i] != '\n')
		i++;
	*line = ft_strsub(str[fd], 0, i);
	str[fd] = ft_strsub(str[fd], i + 1, ft_strlen(str[fd]) - (i + 1));
	ft_strdel(&tmp);
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static char	*s[12000];
	char		buf[BUFF_SIZE + 1];
	char		*tmp;
	int			cat;

	if (fd < 0 || fd > 12000 || !line)
		return (-1);
	while ((cat = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[cat] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strnew(1);
		tmp = ft_strjoin(s[fd], buf);
		free(s[fd]);
		s[fd] = tmp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (cat < 0)
		return (-1);
	else if (cat == 0 && (s[fd] == NULL || s[fd][0] == '\0'))
		return (0);
	return (fill_line(line, s, fd));
}
