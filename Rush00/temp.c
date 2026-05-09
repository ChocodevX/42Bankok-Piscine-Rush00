#include <stdio.h>
#include <unistd.h>

void	oline(int x, int y)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
		{
			write(1, "o", 1);
		}
		else
		{
			write(1, "-", 1);
		}
		i += 1;
	}
	write(1, "\n", 1);
}

void	l_line(int x, int y)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
		{
			write(1, "|", 1);
		}
		else
		{
			write(1, " ", 1);
		}
		i += 1;
	}
	write(1, "\n", 1);
}

void	rush(int x, int y)
{
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

int	main(void)
{
	rush(10, 8);
	return (0);
}