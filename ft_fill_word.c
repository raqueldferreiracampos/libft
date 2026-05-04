/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raferrei <raferrei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:59:36 by raferrei          #+#    #+#             */
/*   Updated: 2026/05/04 16:04:50 by raferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_fill_word(char const *s, char c, char **arr)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		arr[j] = ft_substr(s, start, i - start);
		if (!arr[j])
		{
			ft_free_all(arr, j);
			return (NULL);
		}
		j++;
	}
	arr[j] = NULL;
	return (arr);
}
