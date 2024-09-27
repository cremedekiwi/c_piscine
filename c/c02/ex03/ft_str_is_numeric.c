/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:00:29 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/19 08:27:09 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
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
	char str_num[] = "5";
	char str_abc[] = "abcABC";
	char str_empty[] = "\0";
	printf("Numero : %d\n", ft_str_is_numeric(str_num));
	printf("Alphabet : %d\n", ft_str_is_numeric(str_abc));
	printf("Chaine vide : %d\n", ft_str_is_numeric(str_empty));
	
	return (0);
}*/
