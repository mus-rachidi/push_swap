/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:25:07 by murachid          #+#    #+#             */
/*   Updated: 2021/06/25 20:14:44 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack;

	stack = NULL;
	stack = stack_ab(stack, argc, argv);
	stack->len_a = argc - 1;
	stack->len_b = 0;
	stack->len_c = argc - 1;
	stack_c(stack, argc, 0, 0);
	main_utile(stack, argc, argv);
	free(stack->a);
	free(stack->b);
	free(stack->c);
	free(stack->list);
}
