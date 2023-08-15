/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issahin <issahin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:56:28 by issahin           #+#    #+#             */
/*   Updated: 2023/08/08 15:33:02 by issahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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

	printf("Is (Helloworld) alphabet?: %d", ft_str_is_alpha(str));
	printf("\nIs (1233545) alphabet?: %d", ft_str_is_alpha(str1));
	printf("\nIs ( !@$) alphabet?: %d", ft_str_is_alpha(str2));
	printf("\nIs () alphabet?: %d", ft_str_is_alpha(str3));
	return (0);
}
