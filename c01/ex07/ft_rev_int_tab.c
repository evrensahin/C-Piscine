/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issahin <issahin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:14:00 by issahin           #+#    #+#             */
/*   Updated: 2023/08/02 16:35:56 by issahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap; 
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
/*
int	main()
{
	int	size;
	int tab[6] = {9, 8, 7, 6, 10};
	size = sizeof(tab) / sizeof(tab[0]);

	printf("Before: %d, %d, %d, %d, %d\n", tab[0],tab[1], tab[2], tab[3], tab[4]);

	ft_rev_int_tab(tab, size);
//first way of printing //
	printf("After: %d, %d, %d, %d, %d", tab[1],tab[2], tab[3], tab[4], tab[5]);	
// 2nd way of print:))) //
	printf("\nAfter: ");;
	for (int i = 1; i < size; i++)
	{
		printf("%d", tab[i]);

		if (i < size -1)
		{
			printf(", ");
		}
	}

	return (0);
}
*/
