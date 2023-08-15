/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issahin <issahin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:06:41 by issahin           #+#    #+#             */
/*   Updated: 2023/08/08 15:13:50 by issahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "Helloworld";
	char	str1[] = "1233545";
	char	str2[] = " !@$";
	char	str3[] = "";

	printf("Is (Helloworld) number?: %d", ft_str_is_numeric(str));
	printf("\nIs (1233545) number?: %d", ft_str_is_numeric(str1));
	printf("\nIs ( !@$) number?: %d", ft_str_is_numeric(str2));
	printf("\nIs () number?: %d", ft_str_is_numeric(str3));
	return (0);
}
