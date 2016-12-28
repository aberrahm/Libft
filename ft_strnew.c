/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 02:51:12 by aberrahm          #+#    #+#             */
/*   Updated: 2016/12/28 01:29:58 by aberrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr;
	size_t	str;

	str = 0;
	if (!(ptr = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	while (str < size)
	{
		ptr[str] = '\0';
		str++;
	}
	return (ptr);
}
