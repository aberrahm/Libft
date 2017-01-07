/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberrahm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/31 04:27:40 by aberrahm          #+#    #+#             */
/*   Updated: 2017/01/07 17:29:26 by snicolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*
** in case of failure this function will delete any current list
** it's here to avoid memory leaks
** return NULL, all the time
*/

static t_list	*ft_lstpurge(t_list *lst)
{
	t_list	*next;

	while (lst)
	{
		next = lst->next;
		if (lst->content)
			free(lst->content);
		free(lst);
		lst = next;
	}
	return (NULL);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*result;
	t_list		*rlast;

	result = 0;
	rlast = 0;
	while (lst)
	{
		if (!(rlast = ft_lstpush_back(&result, f(lst))))
			return (ft_lstpurge(result));
		lst = lst->next;
	}
	return (result);
}
