/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 10:28:11 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/22 11:14:18 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*#include <stdio.h>

int     main(void)
{
        int     a;
        int     b;

        a = 1;
        b = 6;
        printf("a = %d ; b = %d\n", a, b);
        printf("Je lance la fonction\n");
        ft_swap(&a, &b);
        printf("a = %d ; b = %d\n", a, b);
}*/
