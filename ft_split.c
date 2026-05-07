/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raferrei <raferrei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:59:36 by raferrei          #+#    #+#             */
/*   Updated: 2026/05/06 16:09:04 by raferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_fill_word(char const *s, char c, char **arr);
static void	ft_free_all(char **words, int size);
static int	ft_words_count(char const *s, char c);
static char	*ft_get_word(char const *s, char c, int *i);

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (ft_words_count(s, c) + 1));
	if (!arr)
		return (NULL);
	return (ft_fill_word(s, c, arr));
}

static char	**ft_fill_word(char const *s, char c, char **arr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			arr[j] = ft_get_word(s, c, &i);
			if (!arr[j])
			{
				ft_free_all(arr, j);
				return (NULL);
			}
			j++;
		}
	}
	arr[j] = NULL;
	return (arr);
}

static void	ft_free_all(char **words, int size)
{
	while (size > 0)
		free(words[--size]);
	free(words);
}

static int	ft_words_count(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*ft_get_word(char const *s, char c, int *i)
{
	int	start;

	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	return (ft_substr(s, start, *i - start));
}
