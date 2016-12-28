/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 05:09:07 by aberrahm          #+#    #+#             */
/*   Updated: 2016/12/27 19:47:40 by aberrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t		size;
	size_t		c;

	size = ft_strlen(s);
	c = 0;
	if (!s || !f)
		return ;
	while (c < size)
	{
		f(c, &s[c]);
		c++;
	}
}
