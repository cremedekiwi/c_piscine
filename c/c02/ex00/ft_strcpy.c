/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:51:41 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/19 11:30:32 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>

int	main(void)
{
	char	src[] = "Reproduire à l’identique la fonction strcpy.";
	char	dest[42];

	printf("Source : %s\n", src);
	ft_strcpy(dest, src);
	printf("Destination : %s", dest);
}*/
