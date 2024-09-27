/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:53:12 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/25 16:18:56 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
/*#include <stdio.h>
int	main(void)
{
	int	i;

	i = 0;
	while (i < 11)
	{	
		if (i == 10)
			printf("%d", ft_fibonacci(i));
		else
			printf("%d, ", ft_fibonacci(i));
		i++;
	}
}*/
