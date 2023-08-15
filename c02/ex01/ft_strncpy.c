/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issahin <issahin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:41:49 by issahin           #+#    #+#             */
/*   Updated: 2023/08/08 12:03:00 by issahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	destination[] = "Hello world!";
	char	destination1[] = "wonderful world";
	char	source[] = "tesuto";
	char	source1[] = "misotofu";

	printf("Before 3 ft_strncpy: %s", destination);
	printf("\nAfter 3 ft_strncpy: %s", ft_strncpy(destination, source, 3));
	printf("\nBefore 5 strncpy: %s", destination1);
	printf("\nAfter 5strcpy: %s", strncpy(destination1, source1, 5));
	return (0);
}
*/
