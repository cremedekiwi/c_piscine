/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 09:09:17 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/22 11:16:29 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	left_index;
	int	right_index;
	int	tab_temp_index;

	left_index = 0;
	right_index = size - 1;
	while (left_index < right_index)
	{
		tab_temp_index = tab[left_index];
		tab[left_index] = tab[right_index];
		tab[right_index] = tab_temp_index;
		left_index++;
		right_index--;
	}
}
/*#include <stdio.h>

int	main(void)
{
	int	tab[] = {-1, 2, 2, 4};
	int	size;
	
	size = sizeof(tab) / sizeof(tab[0]);

	printf("Tableau avant inverion : ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}

	printf("\n");

	ft_rev_int_tab(tab, size);
	
	printf("Tableau apres inverion : ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}

	printf("\n");

	return (0);
}*/
