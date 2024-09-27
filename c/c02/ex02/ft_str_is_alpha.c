/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:47:41 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/19 08:24:38 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include <stdio.h>

int	main(void)
{
	char str_abc[] = "abcABC";
	char str_num[] = "5";
	char str_empty[] = "\0";
	printf("Alphabet : %d\n", ft_str_is_alpha(str_abc));
	printf("Numero : %d\n", ft_str_is_alpha(str_num));
	printf("Chaine vide : %d\n", ft_str_is_alpha(str_empty));
	
	return (0);
}*/
