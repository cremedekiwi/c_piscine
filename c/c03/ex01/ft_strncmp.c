/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:13:20 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/19 15:40:31 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*s1 - *s2);
}
/*#include <stdio.h>

int	main(void)
{
	char	s1[] = "ABC";
	char	s2[] = "AB";
	int	n = 3;

	int result = ft_strncmp(s1,s2, n);
	printf("%d est la diff ; %d est le nb de caracteres\n", result, n);
	if (result > 0)
		printf("'%s' is greater than '%s'\n", s1, s2);
	else if (result < 0)
		printf("'%s' is less than '%s'\n", s1, s2);
	else
		printf("'%s' and '%s' are equal", s1, s2);
}*/
