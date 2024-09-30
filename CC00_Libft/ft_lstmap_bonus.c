/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodr2 <anarodr2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 15:15:53 by anarodr2          #+#    #+#             */
/*   Updated: 2022/12/10 16:57:39 by anarodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	void	*tmp;
	t_list	*element;

	if (!lst)
		return (NULL);
	map = 0;
	while (lst)
	{
		tmp = f(lst->content);
		element = ft_lstnew(tmp);
		if (!element)
		{
			del(tmp);
			ft_lstclear(&map, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&map, element);
	}
	return (map);
}
