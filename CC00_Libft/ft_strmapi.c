/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodr2 <anarodr2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:31:46 by anarodr2          #+#    #+#             */
/*   Updated: 2022/12/07 17:31:54 by anarodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include	<stdio.h>
/*
char	ft_fn(unsigned int i, char c)
{
	(void) i;
	return (c - 32);
}*/

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*new;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	new = ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	return (new);
}
/*
int	main(void)
{
	char	*str;
	char	(*funcion)(unsigned int, char) = ft_fn;

	str = ft_strmapi("hola", funcion);
	printf("%s\n", str);
	return (0);
}*/
