/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtahirov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 23:21:35 by jtahirov          #+#    #+#             */
/*   Updated: 2017/09/27 20:26:29 by jtahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_dlist	*ft_dlstnew(t_dlist **head, void *content, size_t content_size)
{
	t_dlist *new;

	new = (t_dlist *)malloc(sizeof(t_dlist));
	new->content = (void *)malloc(content_size);
	new->content = (content) ?
		ft_memcpy(new->content, content, content_size) : NULL;
	content_size = (content) ? content_size : 0;
	if (*head)
	{
		new->previous = *head;
		new->next = NULL;
	}
	else
	{
		*head = new;
		new->previous = NULL;
		new->next = NULL;
	}
	return (new);
}
