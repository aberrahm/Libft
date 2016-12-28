/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 02:23:26 by aberrahm          #+#    #+#             */
/*   Updated: 2016/12/28 01:31:36 by aberrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	p;
	char	i;
	char	*str;

	i = (char)c;
	str = (char *)s;
	p = ft_strlen(str);
	while ((p--) && (str[p] != '\0'))
	{
		if (str[p] == i)
			return (&str[p]);
	}
	return (NULL);
}
