/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 17:00:02 by aberrahm          #+#    #+#             */
/*   Updated: 2016/12/27 16:54:35 by aberrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	int		i;

	i = 0;
	if (!(s1 = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (len > i)
	{
		s1[i] = s[start];
		start++;
		i++;
	}
	return (s1);
}
