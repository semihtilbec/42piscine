/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setilbec <setilbec@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 17:09:04 by setilbec          #+#    #+#             */
/*   Updated: 2026/07/07 16:07:09 by setilbec         ###   ########.fr       */
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
