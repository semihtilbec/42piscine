/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setilbec <setilbec@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 17:53:00 by setilbec          #+#    #+#             */
/*   Updated: 2026/07/07 18:00:03 by setilbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	control;

	control = 2;
	if (nb < 2)
		return (0);
	while (control <= nb / control)
	{
		if (nb % control == 0)
		{
			return (0);
		}
		control++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
	{
		return (2);
	}
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
