/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggorilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 21:59:24 by ggorilla          #+#    #+#             */
/*   Updated: 2019/09/28 14:27:11 by ggorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ss;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	ss = (char *)malloc(ft_strlen(s) + 1);
	if (ss == NULL)
		return (NULL);
	while (s[i])
	{
		ss[i] = f(s[i]);
		i++;
	}
	ss[i] = '\0';
	return (ss);
}
