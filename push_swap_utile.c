/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utile.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 19:14:01 by murachid          #+#    #+#             */
/*   Updated: 2021/06/22 14:28:47 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_c(t_stack *stack, int argc, int j, int i)
{
	int	y;
	int	tmp;

	while (i < argc - 1)
	{
		stack->grand = stack->c[i];
		y = i;
		j = y;
		while (j < argc - 1)
		{
			if (i != j && stack->grand > stack->c[j])
			{
				stack->grand = stack->c[j];
				y = j;
			}
			j++;
		}
		tmp = stack->c[i];
		stack->c[i] = stack->grand;
		stack->c[y] = tmp;
		i++;
	}
}

void	aloc(t_stack *stack, int argc)
{
	stack->a = malloc(sizeof(int) * (argc - 1));
	stack->c = malloc(sizeof(int) * (argc - 1));
	stack->b = malloc(sizeof(int) * (argc - 1));
}

t_stack	*stack_ab(t_stack *stack, int argc, char *argv[])
{
	int	i;
	int	j;
	int	l;

	i = 0;
	j = 1;
	l = 0;
	stack = malloc(sizeof(t_stack));
	aloc(stack, argc);
	if (!stack || !stack->a || !stack->b || !stack->c)
		return (NULL);
	while (i < argc - 1)
	{
		stack->a[i] = atoi(argv[j]);
		i++;
		j++;
	}
	while (l < argc - 1)
	{
		stack->c[l] = stack->a[l];
		l++;
	}
	return (stack);
}

void	order(t_stack *stack, int argc)
{
	if (stack->len_a <= 150)
		stack->order = 16;
	else if (stack->len_a > 150)
		stack->order = stack->len_a / 12;
	stack->list = malloc(sizeof(int) * (stack->order));
	infini_rendom(stack, argc, 0, 0);
}

void	sort_long(t_stack *stack, int argc)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	order(stack, argc);
	while (stack->len_b != 0)
	{
		big_grand(stack);
		if (stack->b[0] == stack->c[stack->len_c - 1])
		{
			ft_pa(stack, argc);
			big_grand(stack);
			stack->len_c--;
			j++;
			continue ;
		}
		if (stack->pos_grand_b > stack->len_b / 2)
			ft_rrb(stack, stack->len_b + 1);
		else
			ft_rb(stack, stack->len_b + 1);
	}
}
