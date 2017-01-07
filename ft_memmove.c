/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 23:48:58 by aberrahm          #+#    #+#             */
/*   Updated: 2017/01/05 03:58:06 by aberrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*dest1;
	unsigned char	*src1;
	unsigned char	tmp[len];
	size_t			size;

	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	size = 0;
	if (len >= 128 * 1024 * 1024)
		return (NULL);
	while (size < len)
	{
		tmp[size] = src1[size];
		size++;
	}
	size = 0;
	while (size < len)
	{
		dest1[size] = tmp[size];
		size++;
	}
	return (dest);
}
