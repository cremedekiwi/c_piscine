/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:34:50 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/19 08:29:14 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z' )
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
	char	str_lowercase[] = "abc";
	char	str_uppercase[] = "ABC";
	char	str_empty[] = "\0";

	printf("Miniscule : %d\n", ft_str_is_lowercase(str_lowercase));
	printf("Majuscule : %d\n", ft_str_is_lowercase(str_uppercase));
	printf("Chaine vide : %d", ft_str_is_lowercase(str_empty));

}*/
