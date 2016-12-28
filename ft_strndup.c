/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 00:33:52 by aberrahm          #+#    #+#             */
/*   Updated: 2016/12/26 19:06:43 by aberrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*strndup(const char *s1, size_t n)
{
	int		i;
	char	*s2;
	int		len;

	i = 0;
	len = 0;
	while ((s1[len] != '\0') && (len < n))
		len++;
	s2 = (char *)malloc(sizeof(*s1) * (len + 1));
	while ((s1[i] != '\0') && (i < n))
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] != '\0';
	return (s2);
}
