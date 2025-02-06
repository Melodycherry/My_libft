/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:20:52 by mlaffita          #+#    #+#             */
/*   Updated: 2025/02/06 17:04:39 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************************
Cette fonction alloue un bloc de mémoire en initialisant tous ces octets à la valeur 0. 
Bien que relativement proche de la fonction malloc, deux aspects les différencient :
L'initialisation : calloc met tous les octets du bloc à la valeur 0 alors que malloc 
ne modifie pas la zone de mémoire.
Les paramètres d'appels : calloc requière deux paramètres (le nombre d'éléments consécutifs 
à allouer et la taille d'un élément) alors que malloc attend la taille totale du bloc à allouer
****************************************************************************************
*/

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*str;

	i = count * size;
	str = (char *)malloc(sizeof(char) * i);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, i);
	return (str);
}
/*
#include <stdio.h>

int main()
{
	int	*tab;
	int n = 10;
	int i = 0;

	tab = (int *) ft_calloc(n, sizeof(int));
	if (tab == NULL)
	{
		printf("Echec allocation memoire");
		return (1);
	}
	while (i < n)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	free(tab);
	return (0);
}
*/