/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_one.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 13:29:20 by murachid          #+#    #+#             */
/*   Updated: 2021/06/22 13:30:37 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fonction_tow(t_stack *stack, int *j)
{
	if (stack->cont == stack->order)
	{
		*j += stack->order;
		list(stack, *j);
		stack->cont = 0;
	}
}

void	fonction_x(t_stack *stack, int argc, int *x, int *y)
{
	sort_stack_b(stack, argc, *x);
	stack->cont++;
	*x = 0;
	*y = stack->len_a - 1;
}

void	fonction_y(t_stack *stack, int argc, int *x, int *y)
{
	sort_stack_b(stack, argc, *y);
	stack->cont++;
	*x = 0;
	*y = stack->len_a - 1;
}
