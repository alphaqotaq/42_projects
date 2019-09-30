/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 16:42:49 by kmila             #+#    #+#             */
/*   Updated: 2019/09/12 11:56:24 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;
	void	*l_content;
	size_t	size;

	if (!(tmp = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content != NULL)
	{
		l_content = ft_memalloc(content_size);
		size = content_size;
		ft_memcpy(l_content, content, content_size);
		tmp->content = l_content;
		tmp->content_size = size;
		tmp->next = NULL;
	}
	else
	{
		tmp->content = NULL;
		tmp->content_size = 0;
	}
	tmp->next = NULL;
	return (tmp);
}
