/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 04:13:31 by aberrahm          #+#    #+#             */
/*   Updated: 2016/12/28 01:40:47 by aberrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char		*big1;
	char		*little1;
	size_t		a;
	size_t		i;

	a = 0;
	i = 0;
	big1 = (char *)big;
	little1 = (char *)little;
	if (little1 == '\0')
		return (big1);
	while (little1[i] != '\0')
		i++;
	while (big1[a] != '\0' && a < len)
		a++;
	i = len;
	while (little1[i] == big1[a])
	{
		i++;
		a++;
	}
	return (&little1[i]);
}
