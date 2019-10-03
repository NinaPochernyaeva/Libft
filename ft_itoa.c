/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggorilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 19:40:20 by ggorilla          #+#    #+#             */
/*   Updated: 2019/09/28 15:12:46 by ggorilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_kostyl(int n)
{
	char *c;

	if (n == -2147483648)
		c = ft_strdup("-2147483648");
	if (n == 0)
		c = ft_strdup("0");
	if (c == NULL)
		return (NULL);
	return (c);
}

static int	ft_number(int n)
{
	int x;

	if (n == 0)
		return (1);
	x = 0;
	if (n < 0)
		x = 1;
	n *= -1;
	while (n)
	{
		x++;
		n /= 10;
	}
	return (x);
}

char		*ft_itoa(int n)
{
	char	*c;
	int		i;

	if (n == -2147483648 || n == 0)
	{
		c = ft_kostyl(n);
		return (c);
	}
	i = ft_number(n);
	if ((c = (char *)malloc(i + 1)) == NULL)
		return (NULL);
	c[i--] = '\0';
	if (n < 0)
	{
		n *= -1;
		c[0] = '-';
	}
	while (i > 0)
	{
		c[i--] = n % 10 + '0';
		n /= 10;
	}
	if (n != 0)
		c[i] = n % 10 + '0';
	return (c);
}
