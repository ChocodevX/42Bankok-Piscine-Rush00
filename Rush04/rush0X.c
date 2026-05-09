/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 14:56:52 by ponsumri          #+#    #+#             */
/*   Updated: 2026/05/09 14:56:53 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_putchar.c"
void	ft_putchar(char c);

void	line(int x, int row)
{
	int		i;
	char	edge;
	char  	edge2;
	char	fill;

	i = 0;
	if (row == 0)
	{
		edge = 'A';
		edge2 = 'C';
		fill = 'B';
	}
	else if (row == 1)
	{
		edge = 'B';
		edge2 = 'B';
		fill = ' ';
	}
	else if (row == 2)
	{
		edge = 'C';
		edge2 = 'A';
		fill = 'B';
	}
	while (i < x)
	{
		if (i == 0 )
			ft_putchar(edge);
		else if (i == x - 1)
			ft_putchar(edge2);
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
	if (x <= 0 || y <= 0)
		return ;
	while (aline < y)
	{
		if (aline == 0)
			line(x, 0);
		else if (aline == y - 1)
			line(x, 2);
		else
			line(x, 1);
		aline++;
	}
}
