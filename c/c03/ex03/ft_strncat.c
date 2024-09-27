/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:18:02 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/19 16:36:40 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*final_dest;

	final_dest = dest;
	while (*dest)
		dest++;
	while (*src && nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (final_dest);
}
/*#include <stdio.h>
int	main(void)
{
	char	dest[42] = "hey, ";
	char	src[] = "Kiwi";
	int	nb = 9;

	ft_strncat(dest, src, nb);
	printf("%s", dest);
}*/
