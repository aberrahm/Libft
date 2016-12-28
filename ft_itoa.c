/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 02:21:08 by aberrahm          #+#    #+#             */
/*   Updated: 2016/12/28 20:45:01 by aberrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_putnbr_in_tab(int n, int n1, int s)
{
	char	*stock;

	if (!(stock = (char *)malloc(sizeof(char) * (n1))))
		return (NULL);
	stock[n1] = '\0';
	n1--;
	while (n != 0)
	{
		stock[n1] = n % 10 + '0';
		n = n / 10;
		n1--;
	}
	if (s == 1)
		stock[0] = '-';
	return (stock);
}

char			*ft_itoa(int n)
{
	int		i;
	int		s;
	int		n1;

	i = 0;
	s = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		s = 1;
		n = -n;
	}
	n1 = n;
	while (n1 != 0)
	{
		n1 = n1 / 10;
		i++;
	}
	n1 = i + s + 1;
	return (ft_putnbr_in_tab(n, n1, s));
}
