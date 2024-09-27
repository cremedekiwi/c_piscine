/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:15:43 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/30 09:46:54 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_total_length(int size, char **strs, char *sep)
{
	int	length;
	int	i;

	length = 0;
	i = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		if (i < size - 1)
			length += ft_strlen(sep);
		i++;
	}
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	char	*result;
	int		i;

	i = 0;
	if (size == 0)
		return (malloc(1));
	length = ft_total_length(size, strs, sep);
	result = malloc(length + 1);
	if (!result)
		return (NULL);
	*result = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
/*#include <stdio.h>
int	main(void)
{
	char	*strs[] = {"Hello", "World"};
	int size = 2;
	char *sep = " ";

	char *result = ft_strjoin(size, strs, sep);

	if (result)
	{
		printf("%s", result);
		free(result);
	}
	return (0);
}*/
