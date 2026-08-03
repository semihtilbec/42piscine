/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setilbec <setilbec@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 21:06:13 by setilbec          #+#    #+#             */
/*   Updated: 2026/07/04 18:07:01 by setilbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	empty;
	int a = size;
	i = 0;
	size--;
	while (i < size)
	{
		empty = tab[i];
		tab[i] = tab[size];
		tab[size] = empty;
		i++;
		size--;
		
	}
	i = 0;
	while(i < a)
	{
		printf("%d", tab[i]);
		i++;
	}
}



int main()
{
	int rev[] = {1,2,3,4,5,6};
	int size = 6;
	ft_rev_int_tab(rev, size);

}