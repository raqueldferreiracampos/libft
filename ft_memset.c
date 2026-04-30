/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raferrei <raferrei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:56:27 by raferrei          #+#    #+#             */
/*   Updated: 2026/04/23 16:16:47 by raferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *) s;
	while (i < n)
		p[i++] = (unsigned char) c;
	return (s);
}
/*
#include <stdio.h>

int	main()
{
	char str[10] = "Be nice";

	ft_memset(str, '0', 5);
	printf("%s", str);
	return (0);
}
*/
