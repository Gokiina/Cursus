/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodr2 <anarodr2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:40:59 by anarodr2          #+#    #+#             */
/*   Updated: 2022/11/02 13:00:44 by anarodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*result;

	i = 0;
	result = malloc(size * count);
	if (result == NULL)
		return (NULL);
	while (i < size * count)
	{
		result[i] = '\0';
		i++;
	}
	return ((void *)result);
}
