/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:40:27 by murachid          #+#    #+#             */
/*   Updated: 2021/06/22 12:39:53 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	search(t_stack *stack, int x)
{
	int	i;

	i = 0;
	while (i < stack->order)
	{
		if (stack->a[x] == stack->list[i])
			return (1);
		i++;
	}
	return (0);
}

void	small(t_stack *stack)
{
	int	j;

	j = 0;
	stack->min = stack->a[0];
	stack->pos_min = 0;
	while (j < stack->len_a)
	{
		if (stack->min > stack->a[j])
		{
			stack->min = stack->a[j];
			stack->pos_min = j;
		}
		j++;
	}
}

void	big_grand(t_stack *stack)
{
	int	j;

	j = 0;
	stack->grand_b = stack->b[0];
	stack->pos_grand_b = 0;
	while (j < stack->len_b)
	{
		if (stack->grand_b < stack->b[j])
		{
			stack->grand_b = stack->b[j];
			stack->pos_grand_b = j;
		}
		j++;
	}
}
