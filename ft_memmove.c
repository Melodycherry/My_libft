/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:53:07 by mlaffita          #+#    #+#             */
/*   Updated: 2025/02/07 11:40:03 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ***********************************************************************************
Cette fonction permet de copier un bloc de mémoire spécifié par le paramètre 
source dans un nouvel emplacement désigné par le paramètre destination.
On peut donc dire que cette fonction est proche de la fonction memcpy.
la différence réside dans le fait que la fonction memmove accepte que les deux 
zones de mémoire puissent se chevaucher. En cas de chevauchement, la copie se 
passe comme si les octets de la zone source étaient d'abord copiés dans une zone 
temporaire, qui ne chevauche aucune des deux zones pointées par source et destination, 
et les octets sont ensuite copiés de la zone temporaire vers la zone de destination.
**************************************************************************************
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (len == 0 || dst == src)
		return (dst);
	if (src < dst)
		while (len--)
			d[len] = s[len];
	else
		while (len--)
			*d++ = *s++;
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
	ft_memmove(destination, source, n);
	printf("source %s\n", source);
	printf("destination %s\n", destination);
	//
	memmove(destination, source, n);
	printf("source %s\n", source);
	printf("destination %s\n", destination);
	return (0);
}
*/