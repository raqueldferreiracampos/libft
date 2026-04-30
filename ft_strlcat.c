/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raferrei <raferrei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:12:59 by raferrei          #+#    #+#             */
/*   Updated: 2026/04/30 13:31:57 by raferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size == 0 || dst_len >= size)
		return (size + src_len);
	i = 0;
	while (src[i] && (i + dst_len + 1 < size))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdio.h>

int	main(void)
{
	char dst[20] = "omg";
	char *src = "look";

	size_t res_ft
	res_ft = ft_strlcat(dst, src, sizeof (dst));
	printf("%s", dst)
	printf("%zu", res_ft);
	return (0);
}
*/
