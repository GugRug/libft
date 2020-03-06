/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumartin <gumartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 21:58:37 by gumartin          #+#    #+#             */
/*   Updated: 2020/02/27 23:46:57 by gumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	temp = (unsigned char*)malloc(count * size);
	i = 0;
	if (temp == NULL)
		return (NULL);
	while (i < count * size)
	{
		temp[i] = 0;
		i++;
	}
	return ((void*)temp);
}
