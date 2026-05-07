/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raferrei <raferrei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:12:45 by raferrei          #+#    #+#             */
/*   Updated: 2026/05/06 15:37:41 by raferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	if (!dest && !src)
		return (dest);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char	d[10] = "";
	char	s[10] = "or not";
	ft_memcpy(d, s, sizeof(s));
	printf("%s", d);
	return (0);
}
*/
