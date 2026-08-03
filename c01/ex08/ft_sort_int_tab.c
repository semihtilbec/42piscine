/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setilbec <setilbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 20:52:59 by setilbec          #+#    #+#             */
/*   Updated: 2026/06/28 15:05:39 by setilbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	empty;

	while (size > 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				empty = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = empty;
			}
			i++;
		}
	}
	size--;
}
