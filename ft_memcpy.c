/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:21:23 by mlaffita          #+#    #+#             */
/*   Updated: 2025/02/07 11:38:22 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ***************************************************************************
Cette fonction permet de copier un bloc de mémoire spécifié par le paramètre 
source, et dont la taille est spécifiée via le paramètre size, dans un nouvel 
emplacement désigné par le paramètre destination.
En cas de chevauchement des deux blocs de mémoire (source et destination) le 
comportement de la fonction memcpy n'est pas garanti. Dans ce cas, veuillez 
préférer l'utilisation de la fonction memmove.
******************************************************************************
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	if (n == 0 || dst == src)
		return (dst);
	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
int main()
{
	char	source[] = "hello world!";
	char	destination[20];
	size_t	n;

	n = 14;
	ft_memcpy(destination, source, n);
	printf("source %s\n", source);
	printf("destination %s\n", destination);
	//
	memcpy(destination, source, n);
	printf("source %s\n", source);
	printf("destination %s\n", destination);
	return (0);
}
*/