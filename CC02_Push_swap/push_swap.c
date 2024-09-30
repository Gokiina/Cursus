/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodr2 <anarodr2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:20:58 by anarodr2          #+#    #+#             */
/*   Updated: 2023/06/24 18:50:43 by anarodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_detector(int value)
{
	if (value == -1)
	{
		ft_putstr_fd("Error\n", 1);
		exit(1);
	}
	return (0);
}

int	num_check(char *argv[], int size)
{
	int i;
	int j;

	i = 1;// Empezamos en 1 para no contar el nombre del programa
	while (i < size)
	{
		char *str = argv[i];
		j = 0;
		while (str[j])
		{
			if (str[j] == '-')
			{
				if (j > 0 && str[j - 1] != ' ')
					error_detector(-1);
				if (str[j + 1] != '\0' && str[j + 1] != ' ' && !ft_isdigit(str[j + 1]))
					error_detector(-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_repeated_value(int array[], int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] == array[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

int	init(int argc, char *argv[])
{
	int i;
	int *str_values;

	i = 1;  // Empezamos en 1 para saltar el nombre del programa
	str_values = (int *)malloc(sizeof(int) * (argc - 1));
	if (argc < 2)
		error_detector(-1);
	while (i < argc)
	{
		char *str = argv[i];
		if (str[0] == '-')
		{
			if (str[1] == '\0' || str[1] == ' ')
                error_detector(-1);
		}
		if (ft_atoi(str) > INT_MAX)
            error_detector(-1);
		str_values[i - 1] = ft_atoi(str);
		i++;
	}
	num_check(argv, argc);
	error_detector(ft_repeated_value(str_values, argc - 1));
	free(str_values);
	return (0);
}

int main(int argc, char *argv[])
{
    init(argc, argv);
    return 0;
}
