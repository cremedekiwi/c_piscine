/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:23:35 by jarumuga          #+#    #+#             */
/*   Updated: 2024/04/03 15:37:07 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

#include <stdio.h>

int	main(void)
{
	char	dest[10];
	const char *src = "Hey";
	unsigned int size = 10;
	unsigned int copied = ft_strlcpy(dest, src, size);
	printf("%s\n", dest);
	printf("%u\n", copied);
	return (0);
}
