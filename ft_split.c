/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:39:33 by mlaffita          #+#    #+#             */
/*   Updated: 2025/02/07 11:45:04 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ****************************************************************************
Cette fonction extrait un mot d'une chaîne donnée s jusqu'à rencontrer 
un délimiteur c ou la fin de la chaîne.
Elle retourne un pointeur vers une nouvelle chaîne contenant ce mot.
Utilise malloc pour allouer dynamiquement la mémoire nécessaire pour le mot, 
y compris le caractère nul.
*******************************************************************************
*/

char	*ft_extract_word(char const *s, char c)
{
	char	*ptr;
	size_t	i ;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, (i + 1));
	return (ptr);
}

int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		strs_len;
	char	**ptr;

	strs_len = count_words(s, c);
	ptr = (char **)malloc(sizeof(char *) * (strs_len + 1));
	if (!ptr)
		return (NULL);
	i = -1;
	while (++i < strs_len)
	{
		while (s[0] == c)
			s++;
		ptr[i] = ft_extract_word(s, c);
		if (!ptr[i])
		{
			while (i > 0)
				free(ptr[i--]);
			free(ptr);
			return (NULL);
		}
		s = s + ft_strlen(ptr[i]);
	}
	ptr[i] = 0;
	return (ptr);
}
