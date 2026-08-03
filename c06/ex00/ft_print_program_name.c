/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setilbec <setilbec@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 12:05:59 by setilbec          #+#    #+#             */
/*   Updated: 2026/07/08 12:29:36 by setilbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	control;

	control = 0;
	if (argc > 0)
	{
		while (argv[0][control])
		{
			write(1, &argv[0][control], 1);
			control++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
