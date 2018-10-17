/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 02:11:44 by aberrahm          #+#    #+#             */
/*   Updated: 2016/12/28 02:20:38 by aberrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, char *s2, size_t n)
{
	char	*dest;
	int		p;

	dest = s1;
	while (*dest != '\0')
		dest++;
	p = 0;
	while ((s2[p] != '\0') && (n--))
	{
		dest[p] = s2[p];
		p++;
	}
	dest[p] = '\0';
	return (s1);
}