/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:10:38 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/17 21:17:00 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_keep(int c, int d, int u)
{
	char	keep[5];

	keep[0] = c + '0';
	keep[1] = d + '0';
	keep[2] = u + '0';
	if (c == 7)
	{
		write(1, keep, 3);
	}
	else
	{
		keep[3] = ',';
		keep[4] = ' ';
		write(1, keep, 5);
	}
}

void	ft_print_comb(void)
{
	int	c;
	int	d;
	int	u;

	c = 0;
	while (c <= 7)
	{
		d = c + 1;
		while (d <= 8)
		{
			u = d + 1;
			while (u <= 9)
			{
				ft_keep(c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}
/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
