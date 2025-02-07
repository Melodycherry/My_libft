/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:55:56 by mlaffita          #+#    #+#             */
/*   Updated: 2025/02/07 12:10:29 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *******************************************************************************
La fonction strnstr() localise la première occurrence de la chaîne de caractères 
à terminaison nulle needle dans la chaîne haystack, où pas plus de len caractères 
sont recherchés.  Les caractères qui apparaissent après un caractère '\0' ne sont 
pas recherchés.
**********************************************************************************
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] == haystack[i + j] && (i + j) < len)
			{
				if (needle[j + 1] == '\0')
					return ((char *)(haystack + i));
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	chaine[] = "chaine avec un mot a trouver";
	char	mot[] = "mot";
	size_t	taille;

	taille = 20;

	printf("%c\n", *ft_strnstr(chaine, mot, taille));
	printf("%c\n", *strnstr(chaine, mot, taille));
	return(0);
}
*/