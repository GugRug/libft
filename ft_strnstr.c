/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumartin <gumartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 22:53:26 by gumartin          #+#    #+#             */
/*   Updated: 2020/03/04 00:41:35 by gumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	cont[3];

	cont[0] = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (cont[0] < len && *haystack && haystack)
	{
		cont[1] = 0;
		if (*haystack == *needle)
		{
			cont[2] = 1;
			while (needle[cont[1]])
			{
				if (cont[0] + cont[1] >= len)
					return (0);
				if (haystack[cont[1]] != needle[cont[1]++])
					cont[2] = 0;
			}
			if (cont[2] == 1)
				return ((char*)haystack);
		}
		cont[0]++;
		haystack++;
	}
	return (0);
}
