/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_traverse_bwd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtahirov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 23:33:03 by jtahirov          #+#    #+#             */
/*   Updated: 2017/09/27 20:29:38 by jtahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_traverse_bwd(t_dlist *tail, t_dlist *(*f)(t_dlist *elem))
{
	t_dlist *current;

	if (!tail)
		return ;
	current = tail;
	while (current)
	{
		f(current);
		current = current->previous;
	}
}
