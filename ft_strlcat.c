/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggorilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 17:28:01 by ggorilla          #+#    #+#             */
/*   Updated: 2019/09/28 00:16:05 by ggorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t k;

	i = ft_strlen(dst);
	k = ft_strlen(src);
	j = i;
	if (i >= size)
		return (size + k);
	while (*src && i + 1 < size)
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (j + k);
}
