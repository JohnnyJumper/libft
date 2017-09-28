/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtahirov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 20:23:55 by jtahirov          #+#    #+#             */
/*   Updated: 2017/09/25 18:34:12 by jtahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str;
	unsigned char	*str2;
	unsigned int	counter;

	str = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	counter = 0;
	while (counter < n)
	{
		if (str[counter] != str2[counter])
			return (str[counter] - str2[counter]);
		counter++;
	}
	return (0);
}
