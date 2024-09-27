/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:07:19 by jarumuga          #+#    #+#             */
/*   Updated: 2024/04/01 15:24:46 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define ABS(Value) ((Value) < 0 ? -(Value) : (Value))

int	main(void)
{
	int	numbers[] = {28, -42, 42};
	int	n;
	int	i;

	n = sizeof(numbers) / sizeof(numbers[0]);
	i = 0;
	while (i < n)
	{
		printf("Absolute value of %d is %d\n", numbers[i], ABS(numbers[i]));
		i++;
	}
	return (0);
}
