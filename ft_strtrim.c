/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggorilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 23:11:52 by ggorilla          #+#    #+#             */
/*   Updated: 2019/09/27 19:37:54 by ggorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ss;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = (int)(ft_strlen(s) - 1);
	j = 0;
	while (i && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i--;
	while (j < i && (s[j] == ' ' || s[j] == '\n' || s[j] == '\t'))
		j++;
	if (i == j)
	{
		ss = (char *)malloc(1);
		*ss = '\0';
		return (ss);
	}
	ss = (char *)malloc(i - j + 2);
	if (ss == NULL)
		return (NULL);
	ss = ft_strncpy(ss, &s[j], i - j + 1);
	ss[i - j + 1] = '\0';
	return (ss);
}
