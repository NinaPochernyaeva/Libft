//
// Created by Gragas Gorilla on 26/11/2019.
//

#include "libft.h"

char	*ft_strjoinfree1(char *s1, char const *s2)
{
	char	*ss;

	ss = ft_strjoin(s1, s2);
	free(s1);
	return (ss);
}