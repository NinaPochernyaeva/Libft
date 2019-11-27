/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggorilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 21:02:45 by ggorilla          #+#    #+#             */
/*   Updated: 2019/09/22 21:33:56 by ggorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ss;

	ss = (char *)s;
	while (*ss != '\0' && *ss != (char)c)
		ss++;
	if (*ss == '\0' && (char)c != '\0')
		return (NULL);
	else
		return (ss);
}
