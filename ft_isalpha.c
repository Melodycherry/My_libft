/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:25:10 by mlaffita          #+#    #+#             */
/*   Updated: 2025/02/06 17:06:09 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// verifie si un caractere est alpha (upper case ou lower case)

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	test1 = 'a';
	char	test2 = 'B';
	char	test3 = '0';

	printf("Test avec %c, : %d\n",test1, ft_isalpha(test1));
	printf("Test avec %c, : %d\n",test2, ft_isalpha(test2));
	printf("Test avec %c, : %d\n",test3, ft_isalpha(test3));
	return (0);
}
*/