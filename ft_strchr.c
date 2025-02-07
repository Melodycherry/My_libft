/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:07:37 by mlaffita          #+#    #+#             */
/*   Updated: 2025/02/07 11:47:02 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* **********************************************************************
La fonction strchr recherche la première occurrence du caractère c 
(converti en char) dans la chaîne de caractères str.
Si elle trouve le caractère, elle renvoie un pointeur vers la première 
occurrence de ce caractère dans la chaîne.
Si le caractère n'est pas trouvé, elle renvoie NULL.
*************************************************************************
*/

char	*ft_strchr(const char *s, int c)
{
	unsigned char	d;

	d = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == d)
			return ((char *) s);
		s++;
	}
	if (d == '\0')
		return ((char *) s);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char	str[] = "Hello world";

	char *result = ft_strchr(str, 'l');
	printf(" caractere trouve a la position %ld\n", result - str);
	//
	char *resultat = strchr(str, 'l');
	printf(" caractere trouve a la position %ld\n", resultat - str);
	return (0);
}
*/