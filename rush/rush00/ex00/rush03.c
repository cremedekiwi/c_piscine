/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:00:07 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/16 17:16:09 by nhellek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	cx;
	int	cy;	

	cy = 0;
	if (x > 0 && y > 0)
	{
		while (cy < y)
		{
			cx = 0;
			while (cx < x)
			{
				if ((cx == 0 && cy == 0) || (cx == 0 && cy == y - 1))
					ft_putchar('A');
				else if ((cx == x - 1) && (cy == 0 || cy == y - 1))
					ft_putchar('C');
				else if ((cx == 0 || cx == x - 1 || cy == 0 || cy == y - 1))
					ft_putchar('B');
				else
					ft_putchar(' ');
				cx++;
			}
			ft_putchar('\n');
			cy++;
		}
	}
}
