/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:50:57 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/16 17:21:11 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	if (x > 0 && y > 0)
	{
		while (j < y)
		{
			i = 0;
			while (i < x)
			{
				if ((i == 0 && j == 0) || (i == x - 1 && j == 0))
					ft_putchar('A');
				else if ((i == 0 && j == y - 1) || (i == x - 1 && j == y - 1))
					ft_putchar('C');
				else if (i == 0 || i == x - 1 || j == 0 || j == y - 1)
					ft_putchar('B');
				else
					ft_putchar(' ');
				i++;
			}
			ft_putchar('\n');
			j++;
		}
	}
}
