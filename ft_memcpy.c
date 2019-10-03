/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggorilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 15:49:27 by ggorilla          #+#    #+#             */
/*   Updated: 2019/09/21 16:34:35 by ggorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ddst;
	char	*ssrc;
	size_t	i;

	i = 0;
	if (dst || src)
	{
		ddst = (char *)dst;
		ssrc = (char *)src;
		while (i < n)
		{
			ddst[i] = ssrc[i];
			i++;
		}
	}
	return (dst);
}
