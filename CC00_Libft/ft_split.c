/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodr2 <anarodr2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 11:35:02 by anarodr2          #+#    #+#             */
/*   Updated: 2022/12/05 13:10:41 by anarodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	word_count(const char *s, char c)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] && s[i] != c)
				i++;
			word++;
		}
	}
	return (word);
}

int	letter_count(const char *s, char c, int start)
{
	int		letter;

	letter = 0;
	while (s[start] && s[start] != c)
	{
		letter++;
		start++;
	}
	return (letter);
}

void	*ft_free(char **t)
{
	int		i;

	i = 0;
	while (t[i])
	{
		free(t[i]);
		i++;
	}
	free(t);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	tab = ft_calloc(sizeof(char *), (word_count(s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			tab[k] = ft_substr(s, i, letter_count(s, c, i));
			if (!tab[k])
				return (ft_free(tab));
			k++;
			i += letter_count(s, c, i);
		}
	}
	return (tab);
}

//"" -> 0
//"hola que     tal" -> 3
//"hola que tal " -> 3
//" hola que tal" -> 3
/*
int	main(void)
{ 
	int i;
	i = word_count(" hola que tal", ' ');
	//i = letter_count(" hola que tal", ' ');
	printf("El numero de palabras es %d\n", i);
	// printf("El numero de letras des %d\n", i);
	return(0);
}*/
