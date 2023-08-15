/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issahin <issahin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:17:30 by issahin           #+#    #+#             */
/*   Updated: 2023/08/08 15:12:27 by issahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "helloworld";
	char	str1[] = "1233545";
	char	str2[] = " !@$";
	char	str3[] = "";
	char	str4[] = "HelloWorld";

	printf("Is (helloworld) lowercase?: %d", ft_str_is_lowercase(str));
	printf("\nIs (1233545) lowerccase?: %d", ft_str_is_lowercase(str1));
	printf("\nIs ( !@$) lowercase?: %d", ft_str_is_lowercase(str2));
	printf("\nIs () lowercase?: %d", ft_str_is_lowercase(str3));
	printf("\nIs (HelloWorld) lowercase?: %d", ft_str_is_lowercase(str4));
	return (0);
}
