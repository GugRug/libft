/* ************************************************************************** */
/*                                                        :::      ::::::::   */
/*   ft_error.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugrug <gustavorugg@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########          */
/* ************************************************************************** */

#ifndef FT_ERROR_H
# define FT_ERROR_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <errno.h>

# define	FT_EXIT_FAILURE		1
# define	FT_STDERR_FILENO	2

/*
**	--------------- FUNCTION DECLARATION ---------------
*/
void	ft_error(char *str);

#endif
