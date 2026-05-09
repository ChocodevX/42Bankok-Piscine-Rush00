#include <unistd.h>
#include "ft_putchar.c"

void	oline(int x, int y)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		i += 1;
	}
	ft_putchar('\n');
}

void	l_line(int x, int y)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		i += 1;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i = 0;      // x index
	int j = 0;      // y index
	int aline = 0;  // all line
	int olinec = 0; // only o line
	while (aline < y)
	{
		if (aline == 0)
		{
			oline(x, y);
			aline += 1;
			olinec += 1;
		}
		else if (aline == y - 1)
		{
			// printf("1");
			oline(x, y);
			aline += 1;
			olinec += 1;
		}
		else if (aline > 0)
		{
			// printf("aline: %d\n", aline);
			l_line(x, y);
			aline += 1;
		}
	}
}