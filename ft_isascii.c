/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raferrei <raferrei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:29:25 by raferrei          #+#    #+#             */
/*   Updated: 2026/04/23 14:47:34 by raferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i = 0;
	if (ac < 2)
	{
		printf("error");
		return (0);
	}
	while (av[1][i])
	{
		if (!ft_isascii(av[1][i]))
		{
			printf("0");
			return (0);
		}
		i++;
	}
	printf("1");
	return (0);
}
*/
