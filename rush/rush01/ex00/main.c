/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:38:45 by jarumuga          #+#    #+#             */
/*   Updated: 2024/03/24 21:54:18 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_print_array(char *av);
int		*ft_col_up(char *av);
int		*ft_col_down(char *av);
int		*ft_col_left(char *av);
int		*ft_col_right(char *av);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	ft_print_array(argv[1]);
	free(ft_col_up(argv[1]));
	free(ft_col_down(argv[1]));
	free(ft_col_left(argv[1]));
	free(ft_col_right(argv[1]));
	return (0);
}
