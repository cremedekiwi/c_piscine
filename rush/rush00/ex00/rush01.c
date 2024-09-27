/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 10:43:03 by enrmarti          #+#    #+#             */
/*   Updated: 2024/03/17 12:51:11 by enrmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

/* DISPLAYS AN HORIZONTAL LINE */
void	print_horizontal(int x)
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
			ft_putchar('*');
		i++;
	}
	ft_putchar('\n');
}

/* DISPLAYS A VERTICAL LINE */
void	print_vertical(int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
			ft_putchar('/');
		else if (i == y - 1)
			ft_putchar('\\');
		else
			ft_putchar('*');
		ft_putchar('\n');
		i++;
	}
}

/* CHECKS IF THE DIMENSIONS OF THE SQUARE ARE VALID */
int	check_values(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return (0);
	}
	else
	{
		if (x == 1)
		{
			print_vertical(y);
			return (0);
		}
		if (y == 1)
		{
			print_horizontal(x);
			return (0);
		}
		return (1);
	}
}

/* DISPLAYS A SQUARE OF X WIDTH AND Y LENGHT */
void	rush(int x, int y)
{
	int	cy;
	int	cx;

	if (check_values(x, y) == 1)
	{
		cy = 0;
		while (cy < y)
		{
			cx = 0;
			while (cx < x)
			{	
				if ((cx == 0 && cy == 0) || (cx == x - 1 && cy == y - 1))
					ft_putchar('/');
				else if ((cx == x - 1 && cy == 0) || (cx == 0 && cy == y - 1))
					ft_putchar('\\');
				else if (cx == 0 || cy == 0 || cx == x - 1 || cy == y - 1)
					ft_putchar('*');
				else
					ft_putchar(' ');
				cx++;
			}
			ft_putchar('\n');
			cy++;
		}
	}
}
