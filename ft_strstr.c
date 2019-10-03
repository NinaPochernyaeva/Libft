/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggorilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 22:43:13 by ggorilla          #+#    #+#             */
/*   Updated: 2019/09/25 18:28:22 by ggorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	char	*hhaystack;

	i = 0;
	hhaystack = (char *)haystack;
	while (*hhaystack && needle[i])
	{
		i = 0;
		while (hhaystack[i] && needle[i] && needle[i] == hhaystack[i])
			i++;
		if (needle[i] != '\0')
			hhaystack++;
	}
	if (needle[i] == '\0')
		return (hhaystack);
	return (NULL);
}
