/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raferrei <raferrei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:29:23 by raferrei          #+#    #+#             */
/*   Updated: 2026/05/05 19:47:36 by raferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int	main()
{
	char	*s = "ola um dois tres";
	char	c = ' ';
	char **result = ft_split(s,c);
	int i = 0;
	while (result[i])
	{
		printf("%s", result[i]);
		i++;
	}
	return (0);
}
