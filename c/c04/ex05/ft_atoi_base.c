/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 13:15:31 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/31 17:57:31 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' \
		|| (base[i] >= '\t' && base[i] <= '\r'))
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i > 1)
		return (i);
	else
		return (0);
}

int	handle_sign_and_whitespace(char **str)
{
	int	sign;

	sign = 1;
	while (**str == ' ' || (**str >= '\t' && **str <= '\r'))
		(*str)++;
	if (**str == '+' || **str == '-')
	{
		if (**str == '-')
			sign = -1;
		(*str)++;
	}
	return (sign);
}

int	find_index_in_base(char c, char *base)
{
	int	j;

	j = 0;
	while (base[j])
	{
		if (base[j] == c)
			return (j);
		j++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	sign;
	int	nbr;
	int	index;

	base_len = check_base(base);
	if (!base_len)
		return (0);
	sign = handle_sign_and_whitespace(&str);
	nbr = 0;
	while (*str)
	{
		index = find_index_in_base(*str, base);
		if (index == -1)
			break ;
		nbr = nbr * base_len + index;
		str++;
	}
	return (nbr * sign);
}
/*#include <stdio.h>
int main()
{
	char str[] = "2A";
	char base[] = "0123456789ABCDEF";
	int result = ft_atoi_base(str, base);
	printf("%d\n", result);
	return (0);
}*/
