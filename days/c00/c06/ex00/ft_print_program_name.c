/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayait-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:49:39 by ayait-mo          #+#    #+#             */
/*   Updated: 2024/07/13 17:03:06 by ayait-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*program_name;
	int		i;

	program_name = argv[0];
	i = 0;
	while (program_name[i] != '\0')
	{
		write(1, &program_name[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
