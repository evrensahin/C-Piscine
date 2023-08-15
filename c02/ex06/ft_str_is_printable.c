/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issahin <issahin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:38:55 by issahin           #+#    #+#             */
/*   Updated: 2023/08/08 15:09:46 by issahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char    str[] = "helloworld";
	char    str1[] = "1233545";
	char    str2[] = " !@$";
	char    str3[] = "";
	char    str4[] = "HELLOWORLD";

	printf("Is (helloworld) printable?: %d", ft_str_is_printable(str));
	printf("\nIs (1233545) printable?: %d", ft_str_is_printable(str1));
	printf("\nIs ( !@$) printable?: %d", ft_str_is_printable(str2));
	printf("\nIs () printable?: %d", ft_str_is_printable(str3));
	printf("\nIs (HELLOWORLD) printable?: %d", ft_str_is_printable(str4));
	return (0);
}
