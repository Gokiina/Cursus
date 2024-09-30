/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodr2 <anarodr2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:51:38 by anarodr2          #+#    #+#             */
/*   Updated: 2022/11/28 11:55:19 by anarodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstcount;
	size_t	srccount;

	dstcount = 0;
	i = 0;
	srccount = 0;
	while (dst[dstcount])
		dstcount++;
	while (src[srccount])
		srccount++;
	if (dstsize <= dstcount)
		return (srccount + dstsize);
	while (src[i] && (i + dstcount + 1 < dstsize))
	{
		dst[dstcount + i] = src[i];
		i++;
	}
	dst[dstcount + i] = '\0';
	return (dstcount + srccount);
}
