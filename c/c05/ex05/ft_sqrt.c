/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:20:25 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/26 10:22:01 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int	ft_sqrt(int nb)
{
	int	i;
	int	max_i;

	i = 0;
	max_i = 46340;
	while (i <= max_i && ft_recursive_power(i + 1, 2) <= nb)
	{
		if (ft_recursive_power(i + 1, 2) == nb)
			return (i + 1);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main(void)
{
	printf("Racine carre de 25 : %d\n", ft_sqrt(25));
	printf("Racine carre max : %d", ft_sqrt(2147395600));
	return (0);
}*/
