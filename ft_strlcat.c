/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 02:30:02 by aberrahm          #+#    #+#             */
/*   Updated: 2016/12/28 01:28:38 by aberrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		destl;
	size_t		srcl;
	char		*src1;
	size_t		fin;
	size_t		p;

	src1 = (char *)src;
	destl = ft_strlen(dest);
	srcl = ft_strlen(src1);
	p = 0;
	while (destl < fin)
	{
		destl++;
	}
	return (destl);
}
