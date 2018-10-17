/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 21:33:45 by aberrahm          #+#    #+#             */
/*   Updated: 2016/12/30 07:20:58 by aberrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(char *str)
{
	size_t		i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}