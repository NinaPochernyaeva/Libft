/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggorilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 23:12:18 by ggorilla          #+#    #+#             */
/*   Updated: 2019/09/28 15:13:01 by ggorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_one(char *ddst, char *ssrc, size_t len)
{
	int i;

	i = 0;
	while (i < (int)len)
	{
		ddst[i] = ssrc[i];
		i++;
	}
	return (ddst);
}

static char	*ft_two(char *ddst, char *ssrc, size_t len)
{
	int i;

	i = (int)len - 1;
	while (i >= 0)
	{
		ddst[i] = ssrc[i];
		i--;
	}
	return (ddst);
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ddst;
	char	*ssrc;

	ddst = (char *)dst;
	ssrc = (char *)src;
	if (ddst || ssrc)
	{
		if (ddst <= ssrc)
			ddst = ft_one(ddst, ssrc, len);
		else
			ddst = ft_two(ddst, ssrc, len);
	}
	return (dst);
}
