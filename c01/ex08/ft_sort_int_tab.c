/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issahin <issahin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:22:42 by issahin           #+#    #+#             */
/*   Updated: 2023/08/03 11:46:01 by issahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		size--;
	}
}
/*
int	main()
{
	int	size;
	int	tab[6] = {6, 3, 8, 34, 12};
	size = sizeof(tab) / sizeof(tab[0]);
	
	printf("Before: %d, %d, %d, %d, %d\n", tab[0],tab[1], tab[2], tab[3], tab[4]);
	
	ft_sort_int_tab(tab, size);

	printf("After: %d, %d, %d, %d, %d", tab[1],tab[2], tab[3], tab[4], tab[5]);
	
	return (0);
}
*/
