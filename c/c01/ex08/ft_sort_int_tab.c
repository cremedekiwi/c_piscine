/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 09:35:29 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/22 11:16:54 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index_key;
	int	index_prev;
	int	temp_key;

	index_key = 1;
	while (index_key < size)
	{
		temp_key = tab[index_key];
		index_prev = index_key - 1;
		while (index_prev >= 0 && tab[index_prev] > temp_key)
		{
			tab[index_prev + 1] = tab[index_prev];
			index_prev = index_prev - 1;
		}
		tab[index_prev + 1] = temp_key;
		index_key++;
	}
}
/*#include <stdio.h>

int	main(void)
{
	int	tab[] = {5, 2, 9, 1, 7};
	int	size;
	int	i;

	size = sizeof(tab) / sizeof(tab[0]);
	printf("taille du tableau : %d \n", size);
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
	i++;
	}
	printf("\n");
}*/
