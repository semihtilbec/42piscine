/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setilbec <setilbec@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 12:36:29 by setilbec          #+#    #+#             */
/*   Updated: 2026/07/13 15:11:48 by setilbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	total_len(int size, char **strs, char *sep)
{
	int	total;
	int	i;

	if (size <= 0)
		return (0);
	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_len_str(strs[i]);
		i++;
	}
	total += (size - 1) * ft_len_str(sep);
	return (total);
}

void	copy(char *dest, char *src, int *k)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[*k] = src[i];
		(*k)++;
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		k;

	if (size <= 0)
	{
		dest = malloc(1);
		dest[0] = '\0';
		return (dest);
	}
	dest = malloc(total_len(size, strs, sep) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		copy(dest, strs[i], &k);
		if (i < size - 1)
			copy(dest, sep, &k);
		i++;
	}
	dest[k] = '\0';
	return (dest);
}
