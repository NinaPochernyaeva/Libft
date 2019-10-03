/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggorilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 20:33:03 by ggorilla          #+#    #+#             */
/*   Updated: 2019/09/25 21:48:45 by ggorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	j;
	char	*hhaystack;

	i = 0;
	j = 0;
	hhaystack = (char *)haystack;
	while (*hhaystack && needle[i] && j < len)
	{
		j++;
		i = 0;
		while (hhaystack[i] && needle[i] && needle[i] == \
				hhaystack[i] && j + i <= len)
			i++;
		if (needle[i] != '\0')
			hhaystack++;
	}
	if (needle[i] == '\0')
		return (hhaystack);
	return (NULL);
}
