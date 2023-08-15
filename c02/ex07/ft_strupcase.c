/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issahin <issahin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:42:46 by issahin           #+#    #+#             */
/*   Updated: 2023/08/08 16:59:08 by issahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] <= 'z' && str[i] >= 'a')
	{
		str[i] -= 32;
		i++;
	}
	return (str);
}

#include <stdio.h>

int     main(void)
{
        char    str[] = "helloworld";

        printf("Before ft_strupcase: %s", str);
	printf("\nAfter ft_upcased: %s", ft_strupcase(str));
        return (0);
}
