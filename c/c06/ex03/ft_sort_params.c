/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 20:50:18 by jarumuga          #+#    #+#             */
/*   Updated: 2024/04/01 12:12:47 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	partition(char *arr[], int low, int high)
{
	char	*pivot;
	int		i;
	int		j;

	pivot = arr[high];
	i = (low - 1);
	j = low;
	while (j <= high - 1)
	{
		if (ft_strcmp(arr[j], pivot) < 0)
		{
			i++;
			ft_swap(&arr[i], &arr[j]);
		}
		j++;
	}
	ft_swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void	ft_qsort(char *arr[], int low, int high)
{
	int	pi;

	if (low < high)
	{
		pi = partition(arr, low, high);
		ft_qsort(arr, low, pi - 1);
		ft_qsort(arr, pi + 1, high);
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	ft_qsort(argv + 1, 0, argc - 2);
	i = 1;
	while (i < argc)
	{
		str = argv[i];
		while (*str)
		{
			write(1, str, 1);
			str++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
