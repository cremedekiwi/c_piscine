/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:19:52 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/19 10:43:15 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] < 32 || str [i] > 126)
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
	char	str_printable[] = "@";
	char	str_other[] = "\n";
	char	str_empty[] = "\0";

	printf("Caractres imprimables : %d\n", ft_str_is_printable(str_printable));
	printf("Autres caracteres : %d\n", ft_str_is_printable(str_other));
	printf("Chaine vide : %d", ft_str_is_printable(str_empty));
}*/
