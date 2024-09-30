/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarodr2 <anarodr2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:41:37 by anarodr2          #+#    #+#             */
/*   Updated: 2023/06/22 12:51:49 by anarodr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_Item
{
	int		argc;
	char	**argv;
}			t_item;

int		main(int argc, char *argv[]);
int		init(int argc, char *argv[]);
int		error_detector(int value);
int		ft_repeated_value(int array[], int size);

//void	searcher();

#endif