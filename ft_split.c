/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raferrei <raferrei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:59:36 by raferrei          #+#    #+#             */
/*   Updated: 2026/05/04 16:05:28 by raferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words_count(char const *s, char c);
static void	ft_free_all(char **words, int size);
int			ft_fill_word(char const *s, char c, char **arr);
static char	*ft_get_word(char const *s, char c, int *i);

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (ft_words_count(s, c) + 1));
	if (!arr)
		return (NULL);
	arr = ft_fill_word(s, c, arr);
	return (arr);
}
