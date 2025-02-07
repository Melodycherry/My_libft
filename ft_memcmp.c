/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 14:33:43 by mlaffita          #+#    #+#             */
/*   Updated: 2025/02/07 11:35:56 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ****************************************************************************
Cette fonction permet de comparer le contenu de deux blocs de mémoire 
spécifiés par les deux premiers paramètres de la fonction.
Le troisième paramètre, size, permet de spécifier le nombre d'octets sur 
lequel comparer les deux blocs.
Les octets des deux blocs sont comparés deux à deux. Tant que les deux octets 
comparés sont égaux, la fonction passe aux deux suivants.
Si les deux octets comparés sont différents, alors la fonction renvérra 
lequel des deux blocs est le plus petit en termes de contenu.
*******************************************************************************
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	char	tab1[] = {'a', 'b', 'c', 'd'};
	char	tab2[] = {'a', 'b', 'c', 'e'};

	int	result = ft_memcmp(tab1, tab2, 4);
	if ( result == 0)
		printf("les blocs de memoire sont identiques\n");
	else if (result < 0)
		printf("tab1 inferieur a tab2\n");
	else
		printf("tab1 superieur a tab2\n");
	return(0);
}
*/