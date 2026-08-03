/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setilbec <setilbec@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 13:45:41 by setilbec          #+#    #+#             */
/*   Updated: 2026/07/07 15:52:57 by setilbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power >= 1)
	{
		while (power >= 1)
		{
			result = nb * result;
			power--;
		}
	}
	return (result);
}
