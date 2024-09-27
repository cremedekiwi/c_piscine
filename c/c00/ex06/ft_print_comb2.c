/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:15:37 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/17 20:57:17 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_keep(int nb_a, int nb_b)
{
	char	keep[7];

	keep[0] = nb_a / 10 + '0';
	keep[1] = nb_a % 10 + '0';
	keep[2] = ' ';
	keep[3] = nb_b / 10 + '0';
	keep[4] = nb_b % 10 + '0';
	if (nb_a == 98)
		write(1, keep, 5);
	else
	{
		keep[5] = ',';
		keep[6] = ' ';
		write(1, keep, 7);
	}	
}

void	ft_print_comb2(void)
{
	int	nb_a;
	int	nb_b;

	nb_a = 0;
	while (nb_a <= 99)
	{
		nb_b = nb_a + 1;
		while (nb_b <= 99)
		{
			ft_keep(nb_a, nb_b);
			nb_b++;
		}
		nb_a++;
	}
}
/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
