/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggorilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 17:35:34 by ggorilla          #+#    #+#             */
/*   Updated: 2019/09/23 17:41:02 by ggorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *c;

	c = (char *)malloc(size + 1);
	if (c == NULL)
		return (NULL);
	ft_memset(c, '\0', size + 1);
	return (c);
}
