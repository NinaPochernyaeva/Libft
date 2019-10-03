/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggorilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 17:28:08 by ggorilla          #+#    #+#             */
/*   Updated: 2019/09/23 17:40:14 by ggorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *destination, int c, size_t n)
{
	size_t	i;
	char	*u;
	char	chmoki_karaoke;

	chmoki_karaoke = (char)c;
	u = (char*)destination;
	i = 1;
	while (i <= n)
	{
		*u = chmoki_karaoke;
		i++;
		u++;
	}
	return (destination);
}
