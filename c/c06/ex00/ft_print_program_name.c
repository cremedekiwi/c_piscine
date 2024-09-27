/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:15:50 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/22 10:21:27 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *file_name)
{
	while (*file_name != '\0')
	{
		write(1, file_name, 1);
		file_name++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	argc = 0;
	ft_print_program_name(argv[0]);
	return (0);
}
