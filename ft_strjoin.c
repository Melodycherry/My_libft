/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:08:39 by mlaffita          #+#    #+#             */
/*   Updated: 2025/02/07 11:53:16 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* **********************************************
Alloue (avec malloc(3)) et retourne une nouvelle
chaîne, résultat de la concaténation de s1 et s2.
*************************************************
*/

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char *)malloc(len1 + len2 + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, len1 + 1);
	ft_strlcat(result, s2, len1 + len2 + 1);
	return (result);
}
/*
#include <stdio.h>

int main()
{
	char	*s1;
	char	*s2;
	char	*joined_str;

	s1 = "hello";
	s2 = "world!";
	joined_str = ft_strjoin(s1, s2);
	if (joined_str == NULL)
}
*/