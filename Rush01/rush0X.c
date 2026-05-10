/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 14:56:52 by ponsumri          #+#    #+#             */
/*   Updated: 2026/05/10 10:29:52 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_putchar.c"
void	ft_putchar(char c);

void	line_top(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('/');
		else if (i == x - 1)
			ft_putchar('\\');
		else
			ft_putchar('-');
		i++;
	}
}

void	line_mid(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			ft_putchar('*');
		else
			ft_putchar(' ');
		i++;
	}
}

void	rush(int x, int y)
{
	int	aline;

	aline = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (aline < y)
	{
		if (aline == 0 || aline == y - 1)
			line_top(x);
		else
			line_mid(x);
		aline++;
	}
}
