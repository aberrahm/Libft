/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 18:57:46 by aberrahm          #+#    #+#             */
/*   Updated: 2016/12/28 01:42:23 by aberrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *str, char c)
{
	int		i;
	int		j;
	int		k;
	int		word;
	char	**dest;

	i = 0;
	j = 0;
	k = 0;
	word = ft_countword(str, c);
	if (!(dest = (char **)malloc(sizeof(char *) * (word + 1))))
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else if (str[i] != c)
		{
			j = i;
			while (str[i] != c)
				i++;
			dest[k++] = ft_strsub(str, j, i - j);
		}
	}
	return (dest);
}
