/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodr2 <anarodr2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:14:32 by anarodr2          #+#    #+#             */
/*   Updated: 2022/11/28 17:48:23 by anarodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str_new;

	i = 0;
	j = ft_strlen(s1);
	if (!s1)
		return (NULL);
	if (!*s1)
		return (ft_strdup(""));
	if (!set)
		return ((char *)s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j]) && j > i)
		j--;
	str_new = ft_substr(s1, i, (j - i + 1));
	if (!str_new)
		return (NULL);
	return (str_new);
}
