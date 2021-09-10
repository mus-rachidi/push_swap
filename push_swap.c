/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:39:39 by murachid          #+#    #+#             */
/*   Updated: 2021/06/22 14:34:46 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_random(t_stack *stack, int argc)
{
	if (stack->grand == stack->a[0])
		ft_ra(stack, argc);
	else if (stack->grand == stack->a[1])
		ft_rra(stack, argc);
	if (stack->a[0] > stack->a[1])
		ft_sa(stack);
}

void	sort_stack_a(t_stack *stack, int argc, int nb)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	small(stack);
	while (j < nb)
	{
		if (stack->a[0] == stack->c[j])
		{
			ft_pb(stack, argc);
			small(stack);
			j++;
			continue ;
		}
		if (stack->pos_min > stack->len_a / 2)
			ft_rra(stack, stack->len_a + 1);
		else
			ft_ra(stack, stack->len_a + 1);
	}
}

void	list(t_stack *stack, int i)
{
	int	j;

	j = 0;
	while (j < stack->order && i < stack->len_c)
	{	
		stack->list[j] = stack->c[i];
		j++;
		i++;
	}
}

void	sort_stack_b(t_stack *stack, int argc, int nb)
{
	if (nb > stack->len_a / 2)
	{
		while (nb < stack->len_a)
		{
			ft_rra(stack, stack->len_a + 1);
			nb++;
		}
	}
	else
	{
		while (nb > 0)
		{
			ft_ra(stack, stack->len_a + 1);
			nb--;
		}
	}
	ft_pb(stack, argc);
}

void	infini_rendom(t_stack *stack, int argc, int j, int x)
{
	int	y;

	stack->cont = 0;
	y = stack->len_a - 1;
	list(stack, j);
	while (stack->len_a > 0)
	{
		fonction_tow(stack, &j);
		if (search(stack, x) == 1)
		{
			fonction_x(stack, argc, &x, &y);
			continue ;
		}
		if (search(stack, y) == 1)
		{
			fonction_y(stack, argc, &x, &y);
			continue ;
		}
		x++;
		y--;
	}
}
