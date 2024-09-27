/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:30:01 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/20 10:47:00 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		str++;
		length++;
	}
	return (length);
}
/*#include <stdio.h>
int	main(void)
{
	char	str[] = "hello";
	int	length;

	length = 0;
	printf("Il y a %d caracteres dans '%s'.", ft_strlen(str), str);
	return (0);
}*/
