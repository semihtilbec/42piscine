/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: setilbec <setilbec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 19:37:47 by setilbec          #+#    #+#             */
/*   Updated: 2026/06/28 17:51:57 by setilbec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main()
{
	int main()
{
	int value = 1000;
	int *value1 = &value;
	int **value2 = &value1;
	int ***value3 = &value2;
	int ****value4 = &value3;
	int *****value5 = &value4;
	int ******value6 = &value5;
	int *******value7 = &value6;
	int ********value8 = &value7;
	int *********value9 = &value8;

	ft_ultimate_ft(value9);
	printf("%d", *********value9);
}

}