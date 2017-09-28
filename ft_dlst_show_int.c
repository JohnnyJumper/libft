/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_show_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtahirov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 23:35:25 by jtahirov          #+#    #+#             */
/*   Updated: 2017/09/27 00:02:40 by jtahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlst_show_int(void *content)
{
	int		*data;

	data = (int*)content;
	while (*data)
	{
		ft_putnbr(*data);
		ft_putstr("->");
		data++;
	}
	ft_putchar('\n');
}
