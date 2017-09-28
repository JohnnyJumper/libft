/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtahirov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 01:18:39 by jtahirov          #+#    #+#             */
/*   Updated: 2017/09/21 22:20:31 by jtahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char chr;

	chr = c;
	while (*s)
	{
		if (*s == chr)
			return ((char *)s);
		s++;
	}
	if (*s == chr)
		return ((char *)s);
	return (NULL);
}
