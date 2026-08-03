/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setilbec <setilbec@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 14:39:03 by setilbec          #+#    #+#             */
/*   Updated: 2026/07/13 14:58:20 by setilbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	a;
	int	*dest;

	if (min >= max)
		return (NULL);
	a = min;
	i = 0;
	dest = malloc((max - min) * sizeof(int));
	if (!dest)
		return (NULL);
	while (a != max)
	{
		dest[i] = a;
		a++;
		i++;
	}
	return (dest);
}
