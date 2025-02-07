/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:04:52 by mlaffita          #+#    #+#             */
/*   Updated: 2025/02/07 11:32:45 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *********************************************************************
Recherche la première occurence d'une valeur typée int, mais 
interprétée en tant que char, dans un bloc de mémoire.
Si la fonction a trouvé le caractère recherché, la fonction 
renvoie un pointeur vers sa première occurence. Si ce n'est pas le cas, 
la fonction renvoie la valeur NULL.
************************************************************************
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
	char	str[] = "hello world!";
	char	search = 'w';

	char *result = ft_memchr(str, search, sizeof(str));
	if (result != NULL)
		printf("caractere %c a la position %ld\n", search, result - str);
	else
		printf("caractere %c non trouve\n", search);
	return (0);
}
*/