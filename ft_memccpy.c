/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggorilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 21:56:50 by ggorilla          #+#    #+#             */
/*   Updated: 2019/09/21 16:33:57 by ggorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ddst;
	unsigned char	*ssrc;
	size_t			i;

	i = 1;
	ssrc = (unsigned char *)src;
	ddst = (unsigned char *)dst;
	while (i <= n && *ssrc != (unsigned char)c)
	{
		*ddst = *ssrc;
		i++;
		ssrc++;
		ddst++;
	}
	if (i > n)
		return (NULL);
	else
	{
		*ddst = *ssrc;
		return (ddst + 1);
	}
}
