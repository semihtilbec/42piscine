/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setilbec <setilbec@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 13:37:01 by setilbec          #+#    #+#             */
/*   Updated: 2026/07/07 15:53:29 by setilbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	while (nb > 0)
	{
		factorial = factorial * nb;
		nb--;
	}
	return (factorial);
}
