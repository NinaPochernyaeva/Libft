/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggorilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 22:30:43 by ggorilla          #+#    #+#             */
/*   Updated: 2019/09/28 14:32:58 by ggorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	char	*ss;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	j = ft_strlen(s1);
	s = (char *)malloc(j + ft_strlen(s2) + 1);
	if (s == NULL)
		return (NULL);
	ss = s + j;
	s = ft_strcpy(s, s1);
	ss = ft_strcpy(ss, s2);
	return (s);
}
