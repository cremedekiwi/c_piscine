/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:26:12 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/26 09:39:08 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = nb;
	result = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		while (i >= 1)
		{
			result *= i;
			i--;
		}
		return (result);
	}
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(4));
}*/
