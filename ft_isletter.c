/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isletter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtahirov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 14:49:18 by jtahirov          #+#    #+#             */
/*   Updated: 2017/11/05 14:50:54 by jtahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isletter(char x)
{
	return (((x >= 'a' && x <= 'z') ||
			(x >= 'A' && x <= 'Z')) ? 1 : 0);
}
