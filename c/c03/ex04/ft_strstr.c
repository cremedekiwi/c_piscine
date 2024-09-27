/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 13:19:41 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/30 14:13:35 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_ptr;
	char	*to_find_ptr;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		str_ptr = str;
		to_find_ptr = to_find;
		while (*str_ptr == *to_find_ptr && *to_find_ptr != '\0')
		{
			str_ptr++;
			to_find_ptr++;
		}
		if (*to_find_ptr == '\0')
			return (str);
		str++;
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	char str[] = "soijqowi  sqw5564rararaspoutine";
	char to_find[] = "raraspoutine";
	
	char *result = ft_strstr(str, to_find);

	if (result)
		printf("%s", result);
	return (0);	
}*/
