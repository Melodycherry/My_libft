/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:12:51 by mlaffita          #+#    #+#             */
/*   Updated: 2025/02/07 11:49:12 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ****************************************************************************
La fonction strdup (qui signifie "string duplicate") est une fonction standard 
en C qui crée une copie d'une chaîne de caractères (une chaîne de type char *). 
Son fonctionnement repose sur la duplication de la chaîne source, en allouant 
dynamiquement de la mémoire pour stocker la nouvelle chaîne copiée.
*******************************************************************************
*/

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *src)
{
	char	*dest;

	dest = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}
/*
int main ()
{
    char    *chaine_src;
    char    *chaine_dest;

    chaine_src = "hello";
    chaine_dest = ft_strdup(chaine_src);
    printf("%s\n", chaine_dest);
    free(chaine_dest);
    return (0);
}
*/