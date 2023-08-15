/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: issahin <issahin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:14:42 by issahin           #+#    #+#             */
/*   Updated: 2023/07/26 14:38:31 by issahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)

{
	char	i;

	i = 'a';
	while (i <= 'z')
	{
		write (1, &i, sizeof(i));
		i++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
