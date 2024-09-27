/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:56:02 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/22 11:15:13 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_a;
	int	tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	*a = tmp_a / tmp_b;
	*b = tmp_a % tmp_b;
}
/*#include <stdio.h>

int     main(void)
{
        int     a;
        int     b;

        a = 10;
        b = 5;
        ft_ultimate_div_mod(&a, &b);
        printf("La division vaut %d et le reste vaut %d.", a, b);
}*/
