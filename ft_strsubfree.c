//
// Created by Gragas Gorilla on 26/11/2019.
//

#include "libft.h"

char	*ft_strsubfree(char **s, unsigned int start, size_t len)
{
	char *ss;

	ss = ft_strsub(*s, start, len);
	ft_strdel(s);
	return (ss);
}