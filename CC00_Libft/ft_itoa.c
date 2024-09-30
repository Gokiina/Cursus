/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodr2 <anarodr2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:30:01 by anarodr2          #+#    #+#             */
/*   Updated: 2022/12/05 17:41:30 by anarodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	lenght_num(int k)
{
	int	lenght;

	lenght = 0;
	if (k == 0)
		return (1);
	if (k < 0)
		lenght++;
	while (k)
	{
		k = k / 10;
		lenght++;
	}
	return (lenght);
}

char	*ft_itoa(int n)
{
	char	*result_string;
	int		num_lenght;
	int		signo;

	signo = 1;
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	num_lenght = lenght_num(n);
	result_string = ft_calloc(sizeof(char), num_lenght + 1);
	if (!result_string)
		return (NULL);
	if (n < 0)
		signo = -1;
	n = n * signo;
	while (n)
	{
		result_string[num_lenght - 1] = '0' + (n % 10);
		num_lenght--;
		n = n / 10;
	}
	if (signo == -1)
		result_string[0] = '-';
	return (result_string);
}

/*
int main(void)
{
	int i;

	i = 0;
	printf("EL RESULTADO ES: %s\n", ft_itoa(i));
	return(0);
}*/
