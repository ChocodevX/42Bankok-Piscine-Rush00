/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 13:23:35 by ponsumri          #+#    #+#             */
/*   Updated: 2026/05/09 13:37:27 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	line(int x, int row)
{
	int		i;
	char	edge;
	char	fill;

	i = 0;
	if (row == 0 || row == 2)
	{
		edge = 'o';
		fill = '-';
	}
	else
	{
		edge = '|';
		fill = ' ';
	}
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			ft_putchar(edge);
		else
			ft_putchar(fill);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	aline;

	aline = 0;
	while (aline < y)
	{
		if (aline == 0 || aline == y - 1)
			line(x, 0);
		else
			line(x, 1);
		aline++;
	}
}
