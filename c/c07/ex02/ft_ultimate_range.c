/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 10:22:27 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/30 09:45:21 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	*range = malloc(sizeof(int) * (max - min));
	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (*range == NULL)
	{
		return (-1);
	}
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
/*#include <stdio.h>
int	main(void)
{
	int	*range;
	int	min;
	int max;
	int	i;
	int size;

	range = NULL;
	min = 0;
	max = 6;
	i = 0;
	size = ft_ultimate_range(&range, min, max);

	if (range == NULL)
	{
		return (-1);
	}
	else 
	{
		while (i < size)
		{
			printf("%d ", range[i]);
			i++;
		}
		printf("\n");
		free(range);
	}
	return (0);
}*/
