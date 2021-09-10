/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_utile.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 11:48:36 by murachid          #+#    #+#             */
/*   Updated: 2021/06/22 11:49:56 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra_pb(t_stack *stack, int n)
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
	stack->len_a--;
	stack->len_b++;
}

void	ft_ra_pa(t_stack *stack, int n)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack->b[0];
	while (i < n - 2)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->b[n - 2] = temp;
	stack->len_a++;
	stack->len_b--;
}

void	ft_pa(t_stack *stack, int n)
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
	stack->a[0] = stack->b[0];
	ft_ra_pa(stack, n);
	write(1, "pa\n", 3);
}

void	ft_pb(t_stack *stack, int n)
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
	stack->b[0] = stack->a[0];
	ft_ra_pb(stack, n);
	write(1, "pb\n", 3);
}
