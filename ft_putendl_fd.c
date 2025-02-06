/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:29:49 by mlaffita          #+#    #+#             */
/*   Updated: 2025/02/06 17:11:56 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Écrit La chaîne de caractères ’s’ sur le descripteur de fichier 
// donné suivie d’un retour à la ligne

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
