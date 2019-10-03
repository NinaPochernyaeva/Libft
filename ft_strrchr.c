/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggorilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 21:34:57 by ggorilla          #+#    #+#             */
/*   Updated: 2019/09/22 22:18:12 by ggorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ss;

	ss = (char *)s + ft_strlen(s);
	while (ss > (char *)s && *ss != (char)c)
		ss--;
	if (ss == (char *)s && (char)c != s[0])
		return (NULL);
	else
		return (ss);
}
