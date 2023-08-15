/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issahin <issahin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:08:20 by issahin           #+#    #+#             */
/*   Updated: 2023/08/10 11:02:51 by issahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	ft_strupcase(str);
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			if (j == 1)
			{
				str[i] -= 32;
				j = 0;
			}
		}
		else if (str[i] <= '9' && str[i] >= '0')
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("Before ft_strcapitalize: %s", str);
	printf("\nAfter ft_strcapitalize: %s", ft_strcapitalize(str));
	return (0);
}
*/
