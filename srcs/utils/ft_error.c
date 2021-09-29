/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugrug <gustavorugg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########          */
/* ************************************************************************** */

#include "ft_error.h"

static void	ft_putstr_error(char *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			write(fd, s, 1);
			s++;
		}
	}
}

void	ft_error(char *str)
{
	ft_putstr_error("Error\n", FT_STDERR_FILENO);
	if (errno)
		perror("");
	else if (str != NULL)
	{
		ft_putstr_error(str, FT_STDERR_FILENO);
		ft_putstr_error("\n", FT_STDERR_FILENO);
	}
	exit(FT_EXIT_FAILURE);
}
