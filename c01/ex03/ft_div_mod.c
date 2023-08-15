/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issahin <issahin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:29:25 by issahin           #+#    #+#             */
/*   Updated: 2023/08/02 15:05:56 by issahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	x, y, z, t;

	printf("Enter a number: ");
	scanf("%d", &x);
	printf("Enter another number: ");
	scanf("%d", &y);
	ft_div_mod(x, y, &z, &t);
	printf("Div = %d\n", z);
	printf("Mod = %d\n", t);
	return (0);
}
*/
