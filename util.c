/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 12:34:28 by murachid          #+#    #+#             */
/*   Updated: 2021/06/22 12:36:54 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	main_utile(t_stack *stack, int argc, char *argv[])
{
	if (check_error(stack, argv) == 1)
		exit(1);
	if (argc == 1)
		exit(1);
	if (argc == 3 && stack->a[0] > stack->a[1])
		ft_sa(stack);
	if (stack->len_a == 3)
		three_random(stack, argc);
	else if (stack->len_a == 5 || stack->len_a == 4)
	{
		sort_stack_a(stack, argc, 2);
		three_random(stack, stack->len_a + 1);
		ft_pa(stack, argc);
		ft_pa(stack, argc);
	}
	else if (stack->len_a > 5 && stack->len_a < 20)
	{
		sort_stack_a(stack, argc, stack->len_a);
		while (stack->len_b != 0)
			ft_pa(stack, argc);
	}
	else if (stack->len_a >= 20)
		sort_long(stack, argc);
}
