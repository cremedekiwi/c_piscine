/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:17:22 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/19 15:12:35 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*#include <stdio.h>

int	main(void)
{
	char s1[] = "ABJ";
	char s2[] = "ABC";

	int result = ft_strcmp(s1,s2);
	printf("%d est la diff\n", result);
	if (result > 0)
		printf("'%s' is greater than '%s'\n", s1, s2);
	else if (result < 0)
		printf("'%s' is less than '%s'\n", s1, s2);
	else
		printf("'%s' and '%s' are equal", s1, s2);
}*/
