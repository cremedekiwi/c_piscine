/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:07:14 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/25 14:44:44 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else
	{
		while (power >= 1)
		{
			result = result * nb;
			power--;
		}
		return (result);
	}
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(5, 3));
	return (0);
}*/
