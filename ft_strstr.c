/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 03:11:03 by aberrahm          #+#    #+#             */
/*   Updated: 2016/12/28 19:59:33 by aberrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char	*big1;
	char	*little1;
	int		p;
	int		i;

	p = 0;
	big1 = (char *)big;
	little1 = (char *)little;
	while (big1[p] != '\0')
	{
		i = 0;
		if (big1[p] == little1[i])
		{
			p++;
			i++;
		}
		return (&little1[i]);
	}
	return (NULL);
}
