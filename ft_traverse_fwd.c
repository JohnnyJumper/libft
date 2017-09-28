/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_traverse_fwd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtahirov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 23:30:56 by jtahirov          #+#    #+#             */
/*   Updated: 2017/09/27 20:30:16 by jtahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_traverse_fwd(t_dlist *head, t_dlist *(*f)(t_dlist *elem))
{
	t_dlist *current;

	if (!head)
		return ;
	current = head;
	while (current)
	{
		f(current);
		current = current->next;
	}
}
