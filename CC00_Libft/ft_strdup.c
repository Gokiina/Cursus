/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodr2 <anarodr2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:09:29 by anarodr2          #+#    #+#             */
/*   Updated: 2022/11/06 13:49:35 by anarodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	while (j < i)
	{
		str[j] = s1[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
/*
int main(void)
{
 //	char *s1 = "soy el string s1\n";
//	char *str = ft_strdup(s1);
// 	printf("%sfinal", str);
	printf("%s\n", ft_strdup("Patatas"));
	return(0);
}*/
