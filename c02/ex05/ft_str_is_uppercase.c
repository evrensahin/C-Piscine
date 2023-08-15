/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issahin <issahin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:29:22 by issahin           #+#    #+#             */
/*   Updated: 2023/08/08 15:11:15 by issahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	char	str4[] = "HELLOWORLD";

	printf("Is (helloworld) uppercase?: %d", ft_str_is_uppercase(str));
	printf("\nIs (1233545) uppercase?: %d", ft_str_is_uppercase(str1));
	printf("\nIs ( !@$) uppercase?: %d", ft_str_is_uppercase(str2));
	printf("\nIs () uppercase?: %d", ft_str_is_uppercase(str3));
	printf("\nIs (HELLOWORLD) uppercase?: %d", ft_str_is_uppercase(str4));
	return (0);
}
