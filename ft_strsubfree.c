/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubfree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggorilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 18:45:30 by ggorilla          #+#    #+#             */
/*   Updated: 2019/11/27 18:45:35 by ggorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsubfree(char **s, unsigned int start, size_t len)
{
	char *ss;

	ss = ft_strsub(*s, start, len);
	ft_strdel(s);
	return (ss);
}
