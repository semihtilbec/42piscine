/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setilbec <setilbec@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 12:44:11 by setilbec          #+#    #+#             */
/*   Updated: 2026/07/08 15:21:23 by setilbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	controlc;
	int	controlv;

	controlc = argc - 1;
	controlv = 0;
	if (controlc >= 1)
	{
		while (controlc >= 1)
		{
			controlv = 0;
			while (argv[controlc][controlv])
			{
				write(1, &argv[controlc][controlv], 1);
				controlv++;
			}
			write(1, "\n", 1);
			controlc--;
		}
	}
	return (0);
}
