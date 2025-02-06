/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:09:05 by mlaffita          #+#    #+#             */
/*   Updated: 2025/02/06 17:10:16 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Écrit le caractère ’c’ sur le descripteur de fichier donné.

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
