/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:25:23 by mlaffita          #+#    #+#             */
/*   Updated: 2025/02/07 11:58:13 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* **********************************************************************
Cette fonction permet de comparer deux chaînes de caractères et de 
savoir si la première est inférieure, égale ou supérieure à la seconde. 
Cette comparaison sera réalisée en utilisant l'ordre lexicographique et 
donc, en tenant compte des valeurs numérique des codes ASCII (ou Unicode, 
selon l'encodage utilisé) des différents caractères comparés.
*************************************************************************
*/

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	chaine1[] = "hello";
	char	chaine2[] = "hell";
	int	number;

	number = 6;
	ft_strncmp(chaine1, chaine2, number);
	printf("%d\n", ft_strncmp(chaine1, chaine2, number));
	printf("%d\n", strncmp(chaine1, chaine2, number));
	return (0);
}
*/