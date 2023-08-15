/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issahin <issahin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:00:28 by issahin           #+#    #+#             */
/*   Updated: 2023/08/08 17:07:06 by issahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] <= 'Z' && str[i] >= 'A')
	{
		str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "HELLOWORLD";

	printf("Before ft_strlowcase: %s", str);
	printf("\nAfter ft_strlowcased: %s", ft_strlowcase(str));
	return (0);
}
*/
