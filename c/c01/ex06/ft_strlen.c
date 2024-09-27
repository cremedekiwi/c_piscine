/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 20:09:49 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/22 11:16:04 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != 0)
	{
		str++;
		length++;
	}
	return (length);
}
/*int	main(void)
{
	char	c;

	c = ft_strlen("abcdef");
	printf("%d", c);
}*/
