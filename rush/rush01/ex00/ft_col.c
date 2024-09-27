/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_col.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:30:21 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/24 21:55:03 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);
int		ft_atoi(char *str);

int	*ft_col_up(char *av)
{
	int	i;
	int	j;
	int	*col_up;

	col_up = malloc(4 * sizeof(int));
	i = 0;
	j = 0;
	while (i <= 30)
	{
		while (i <= 6)
		{
			col_up[j] = ft_atoi(&av[i]);
			i += 2;
			j++;
		}
		i++;
	}
	return (col_up);
}

int	*ft_col_down(char *av)
{
	int	i;
	int	j;
	int	*col_down;

	i = 0;
	j = 0;
	col_down = malloc(4 * sizeof(int));
	while (i <= 30)
	{
		while (i >= 8 && i <= 14)
		{
			col_down[j] = ft_atoi(&av[i]);
			i += 2;
			j++;
		}
		i++;
	}
	return (col_down);
}

int	*ft_col_left(char *av)
{
	int	i;
	int	j;
	int	*col_left;

	i = 0;
	j = 0;
	col_left = malloc(4 * sizeof(int));
	while (i <= 30)
	{
		while (i >= 16 && i <= 22)
		{
			col_left[j] = ft_atoi(&av[i]);
			i += 2;
			j++;
		}
		i++;
	}
	return (col_left);
}

int	*ft_col_right(char *av)
{
	int	i;
	int	j;
	int	*col_right;

	i = 0;
	j = 0;
	col_right = malloc(4 * sizeof(int));
	while (i <= 30)
	{
		while (i >= 24 && i <= 30)
		{
			col_right[j] = ft_atoi(&av[i]);
			i += 2;
			j++;
		}
		i++;
	}
	return (col_right);
}
