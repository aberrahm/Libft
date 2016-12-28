/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 02:30:02 by aberrahm          #+#    #+#             */
/*   Updated: 2016/12/28 19:56:33 by aberrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		dest1;
	size_t		src1;
	char		*fin;
	size_t		p;

	dest1 = ft_strlen(dest);
	src1 = ft_strlen((char *)src);
	p = 0;
	fin = (src1 + dest1);
	if ((size = 0) || (fin = 0))
		return (NULL);
	while (src[p] != '\0')
	{
		fin[p] = src[p];
		p++;
	}
	p = 0;
	while (dest[p] != '\0')
	{
		fin[p] = dest[p];
		p++;
	}
	fin[p] = '\0';
	return (&fin[p]);
}
