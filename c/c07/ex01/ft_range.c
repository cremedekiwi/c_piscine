/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:36:24 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/30 09:44:27 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	array = malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (NULL);
	if (array == NULL)
		return (NULL);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
/*#include <stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	i;

	min = -5;
	max = 5;
	i = 0;
	range = ft_range(min, max);
	if (range == NULL)
		return (1);
	while (i < max - min)
	{
		printf("%d ", range[i]);
		i++;
	}
	free(range);
	return (0);
}*/
