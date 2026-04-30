/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raferrei <raferrei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:17:10 by raferrei          #+#    #+#             */
/*   Updated: 2026/04/30 13:31:15 by raferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (0);
	i = 0;
	while (src[i] || i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*
#include <stdio.h>

int	main()
{
    char dst[10];
    const char *src = "Hello, World!";

	size_t len = ft_strlcpy(dst, src, sizeof(dst));
	printf("Copied string: %s\n", dst);
	printf("Length of source string: %zu\n", len);
	return 0;
}
*/
