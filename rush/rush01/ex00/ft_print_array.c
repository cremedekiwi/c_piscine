/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:34:13 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/24 22:18:51 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_col_up(char *av);
int	*ft_col_down(char *av);
int	*ft_col_left(char *av);
int	*ft_col_right(char *av);
void	ft_init_array(int array[4][4]);

void	ft_print_array(char *av)
{
	int	array[4][4];
	int	i;
	int	y;
	int	x;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			array[x][y] = 0;
			y++;
		}
		x++;
	}
	i = 0;
	while (i < 4)
	{
		if (ft_col_up(av)[i] == 1)
		{
			array[0][i] = 4;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (ft_col_down(av)[i] == 1)
		{
			array[3][i] = 4;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (ft_col_left(av)[i] == 1)
		{
			array[i][0] = 4;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (ft_col_right(av)[i] == 1)
		{
			array[i][3] = 4;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (ft_col_up(av)[i] == 4)
		{
			array[0][i] = 1;
			array[0][i + 1] = 2;
			array[0][i + 2] = 3;
			array[0][i + 3] = 4;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (ft_col_down(av)[i] == 4)
		{
			array[3][i] = 1;
			array[3][i + 1] = 2;
			array[3][i + 2] = 3;
			array[3][i + 3] = 4;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (ft_col_left(av)[i] == 4)
		{
			array[i][0] = 1;
			array[i + 1][0] = 2;
			array[i + 2][0] = 3;
			array[i + 3][0] = 4;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (ft_col_right(av)[i] == 4)
		{
			array[i][3] = 1;
			array[i + 1][3] = 2;
			array[i + 2][3] = 3;
			array[i + 3][3] = 4;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if ((ft_col_up(av)[i] == 3 && array[0][i] == 2))
		{
			array[2][i] = 4;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if ((ft_col_down(av)[i] == 3 && array[3][i] == 2))
		{
			array[1][i] = 4;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if ((ft_col_left(av)[i] == 3 && array[i][0] == 2))
		{
			array[i][2] = 4;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if ((ft_col_right(av)[i] == 3 && array[i][3] == 2))
		{
			array[i][1] = 4;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (ft_col_up(av)[i] == 3 && array[0][i] == 2 && array[2][i] == 4)
		{
			array[1][i] = 3;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (ft_col_down(av)[i] == 3 && array[3][i] == 2 && array[1][i] == 4)
		{
			array[2][i] = 3;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (ft_col_left(av)[i] == 3 && array[i][0] == 2 && array[i][2] == 4)
		{
			array[i][1] = 3;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (ft_col_right(av)[i] == 3 && array[i][3] == 2 && array[i][1] == 4)
		{
			array[i][2] = 3;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (ft_col_up(av)[i] == 2 && array[0][i] == 0 &&
		array[2][i] == 4 && array[3][i] == 3)
		{
			array[0][i] = 2;
			array[1][i] = 1;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (ft_col_down(av)[i] == 2 && array[3][i] == 0 &&
		array[1][i] == 4 && array[0][i] == 3)
		{
			array[3][i] = 2;
			array[2][i] = 1;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (ft_col_left(av)[i] == 2 && array[i][0] == 0 &&
		array[i][2] == 4 && array[i][3] == 3)
		{
			array[i][0] = 2;
			array[i][1] = 1;
		}
		i++;
	}							
	i = 0;
	while (i < 4)
	{
		if (ft_col_right(av)[i] == 2 && array[i][3] == 0 &&
		array[i][1] == 4 && array[i][0] == 3)
		{
			array[i][3] = 2;
			array[i][2] = 1;
		}
		i++;
	}
	while (i < 4)
	{
		if (ft_col_up(av)[i] == 2 && array[1][i] == 4 &&
		array[2][i] == 3 && array[3][i] == 2)
		{
			array[1][i] = 1;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (ft_col_down(av)[i] == 2 && array[2][i] == 4 &&
		array[1][i] == 3 && array[0][i] == 2)
		{
			array[3][i] = 1;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (ft_col_left(av)[i] == 2 && array[i][1] == 4 &&
		array[i][2] == 3 && array[i][3] == 2)
		{
			array[i][0] = 1;
		}
		i++;
	}							
	i = 0;
	while (i < 4)
	{
		if (ft_col_right(av)[i] == 2 && array[i][2] == 4 &&
		array[i][1] == 3 && array[i][0] == 2)
		{
			array[i][3] = 1;
		}
		i++;
	}
	while (i < 4)
	{
		if (ft_col_up(av)[i] == 2 && array[0][i] == 0 &&
		array[3][i] == 4)
		{
			array[0][i] = 3;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (ft_col_down(av)[i] == 2 && array[3][i] == 0 &&
		array[0][i] == 4)
		{
			array[3][i] = 3;
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (ft_col_left(av)[i] == 2 && array[i][0] == 0 &&
		array[i][3] == 4)
		{
			array[i][0] = 3;
		}
		i++;
	}							
	i = 0;
	while (i < 4)
	{
		if (ft_col_right(av)[i] == 2 && array[i][3] == 0 &&
		array[i][0] == 4)
		{
			array[i][3] = 3;
		}
		i++;
	}							
	ft_init_array(array);
}
