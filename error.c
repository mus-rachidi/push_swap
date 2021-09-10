/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:42:25 by murachid          #+#    #+#             */
/*   Updated: 2021/06/25 12:49:53 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_characters(t_stack *stack, char *argv[])
{
	int		i;
	int		j;

	i = 1;
	while (i < stack->len_a + 1)
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] == '+' || argv[i][j] == '-')
			&& j == 0 && ft_isdigit(argv[i][j + 1]) == 0)
			{
				j++;
				continue ;
			}
			if (ft_isdigit(argv[i][j]) == 1)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_order(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < stack->len_c)
	{
		if (stack->a[j] != stack->c[i])
			return (1);
		i++;
		j++;
	}
	return (0);
}

int	ft_double_number(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->len_c - 1)
	{
		if (stack->c[i] == stack->c[i + 1])
			return (1);
		i++;
	}
	return (0);
}

void	ft_max(t_stack *stack, char *argv[])
{
	int	i;

	i = 1;
	while (i <= stack->len_a)
	{
		ft_atoi(argv[i]);
		i++;
	}
}

int	check_error(t_stack *stack, char *argv[])
{
	if (ft_characters(stack, argv) == 1)
	{
		printf("error\n");
		exit(1);
	}
	ft_max(stack, argv);
	if (ft_double_number(stack))
	{
		printf("error\n");
		exit(1);
	}
	if (!ft_order(stack))
		exit(1);
	return (0);
}
