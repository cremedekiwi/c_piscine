/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:46:05 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/19 08:30:36 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	char	str_uppercase[] = "ABC";
	char	str_other[] = "abc";
	char	str_empty[] = "\0";

	printf("Majuscule : %d\n", ft_str_is_uppercase(str_uppercase));
	printf("Autre : %d\n", ft_str_is_uppercase(str_other));
	printf("Vide : %d", ft_str_is_uppercase(str_empty));
}*/
