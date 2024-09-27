/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:23:02 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/20 10:25:53 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*#include <stdio.h>

int	main(void)
{
	char src[] = "test";
	unsigned int n = 2;
	char dest[n];

	printf("Source : %s\n", src);
	ft_strncpy(dest, src, n);
	printf("Destination : %s ; Nombre de caracteres : %d", dest, n);
}*/
