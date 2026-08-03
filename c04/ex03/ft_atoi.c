/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setilbec <setilbec@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 14:19:30 by setilbec          #+#    #+#             */
/*   Updated: 2026/07/04 19:37:15 by setilbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	pointer;
	int	result;

	result = 0;
	i = 0;
	pointer = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			pointer *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (pointer * result);
}
