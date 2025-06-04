/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:36:47 by mlaffita          #+#    #+#             */
/*   Updated: 2024/08/31 13:58:18 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include<stdio.h>
int	main()
{
	char chaine1[] ="hello";
	char chaine2[] ="hell!";
	ft_strcmp(chaine1, chaine2);
	printf("%d", ft_strcmp(chaine1, chaine2));
	return (0);
}
*/
