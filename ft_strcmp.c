/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtahirov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 13:57:06 by jtahirov          #+#    #+#             */
/*   Updated: 2017/09/25 18:05:34 by jtahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	const unsigned char	*pt1;
	const unsigned char	*pt2;

	pt1 = (const unsigned char *)s1;
	pt2 = (const unsigned char *)s2;
	while (*pt1 || *pt2)
	{
		if ((*pt1 < *pt2) || (*pt1 > *pt2))
			return (*pt1 - *pt2);
		pt1++;
		pt2++;
	}
	return (0);
}
