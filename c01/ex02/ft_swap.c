/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issahin <issahin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 12:16:16 by issahin           #+#    #+#             */
/*   Updated: 2023/08/02 15:12:24 by issahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	x, y;

	printf("Enter the first integer: ");
	scanf("%d", &x);
	printf("Enter the second integer: ");
	scanf("%d", &y);
	printf("\nBefore swapping:\n");
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	ft_swap(&x, &y);
	printf("\nAfter swapping:\n");
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	return (0);
}
*/
