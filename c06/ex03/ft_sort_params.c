/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setilbec <setilbec@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 13:31:33 by setilbec          #+#    #+#             */
/*   Updated: 2026/07/08 15:19:45 by setilbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

void	sort(int argc, char **argv)
{
	char	*temp;
	int		c;
	int		v;

	c = 1;
	while (c < argc - 1)
	{
		v = c + 1;
		while (v < argc)
		{
			if (ft_strcmp(argv[c], argv[v]) > 0)
			{
				temp = argv[c];
				argv[c] = argv[v];
				argv[v] = temp;
			}
			v++;
		}
		c++;
	}
}

int	main(int argc, char **argv)
{
	int	c;

	sort(argc, argv);
	c = 1;
	while (c < argc)
	{
		ft_putstr(argv[c]);
		c++;
	}
	return (0);
}
