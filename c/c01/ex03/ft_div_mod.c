/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:21:46 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/22 11:19:19 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include <stdio.h>
int     main(void)
{
        int     a;
        int     b;
        int     div;
        int     mod;

        a = 10;
        b = 5;
        ft_div_mod(a, b, &div, &mod);
        printf("%d par %d vaut %d ; reste %d.",a, b, div, mod);
}*/
