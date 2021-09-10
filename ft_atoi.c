/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 16:36:24 by murachid          #+#    #+#             */
/*   Updated: 2021/06/25 12:52:53 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit_a(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

void	ft_atoi(const char *str)
{
	int		abs;
	long	nbr;

	abs = 1;
	nbr = 0;
	while (*str == ' ' || *str == '\n' || *str == '\f'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			abs = -1;
		str++;
	}
	while (ft_isdigit_a((int)*str))
	{
		nbr = nbr * 10 + *str - '0';
		if ((nbr > 2147483647 && abs > 0) || (nbr > 2147483648 && abs < 0))
		{
			printf("error\n");
			exit(1);
		}
		str++;
	}
}
