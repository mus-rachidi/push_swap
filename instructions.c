/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 10:55:44 by murachid          #+#    #+#             */
/*   Updated: 2021/06/22 11:49:22 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack *stack)
{
	int		tmp;

	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	write(1, "sa\n", 3);
}

void	ft_rb(t_stack *stack, int n)
{
	int	temp;
	int	i;

	i = 0;
	temp = stack->b[0];
	while (i < n - 2)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->b[n - 2] = temp;
	write(1, "rb\n", 3);
}

void	ft_ra(t_stack *stack, int n)
{
	int	temp;
	int	i;

	i = 0;
	temp = stack->a[0];
	while (i < n - 2)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->a[n - 2] = temp;
	write(1, "ra\n", 3);
}

void	ft_rrb(t_stack *stack, int n)
{
	int	temp;
	int	i;

	i = n - 2;
	temp = stack->b[n - 2];
	while (i > 0)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[0] = temp;
	write(1, "rrb\n", 4);
}

void	ft_rra(t_stack *stack, int n)
{
	int	temp;
	int	i;

	i = n - 2;
	temp = stack->a[n - 2];
	while (i > 0)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[0] = temp;
	write(1, "rra\n", 4);
}
