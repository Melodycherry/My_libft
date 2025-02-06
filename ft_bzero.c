/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:33:27 by mlaffita          #+#    #+#             */
/*   Updated: 2025/02/06 17:02:16 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *******************************************************
La fonction bzero() met à 0 les n premiers octets du bloc 
pointé par s (octets contenant « \0 »).
**********************************************************
*/

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n--)
		*str++ = '\0';
}
/*
#include <stdio.h> 

int main()
{
	char	string[] = "hello world!";
	int i = 0;
	
	printf("avant fonction : %s\n", string);
	ft_bzero(string, 5);
	printf("apres fonction :");
	while ( i < sizeof(string))
	{
		if (string[i] == '\0')
			printf("\\0");
		else 
			printf("%c", string[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/