/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 15:57:05 by aberrahm          #+#    #+#             */
/*   Updated: 2016/12/28 01:29:13 by aberrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	size;
	size_t	c;
	char	*s2;

	str = (char *)s;
	size = ft_strlen(str);
	c = 0;
	if (!(s2 = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (c < size)
	{
		s2[c] = f(c, str[c]);
		c++;
	}
	return (s2);
}
