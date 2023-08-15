/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issahin <issahin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:51:18 by issahin           #+#    #+#             */
/*   Updated: 2023/08/08 12:03:55 by issahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[] = "Hello world!";
	char	dest1[] = "Hello world!";
	char	src[] = "tesuto";
	char	src1[] = "tesuto"; 

	printf("Before ft_strcpy: %s", dest);
	printf("\nAfter ft_strcpy: %s", ft_strcpy(dest, src));
	printf("\nBefore strcpy: %s", dest1);
	printf("\nAfter strcpy: %s", strcpy(dest1, src1));
	
	return (0);
}
*/
