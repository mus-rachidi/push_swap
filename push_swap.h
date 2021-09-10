/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:25:12 by murachid          #+#    #+#             */
/*   Updated: 2021/06/25 12:54:04 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int		order;
	int		*a;
	int		*b;
	int		*c;
	int		len_a;
	int		len_c;
	int		len_b;
	int		min;
	int		len;
	int		pos_min;
	int		grand;
	int		*list;
	int		pos_grand_b;
	int		grand_b;
	int		cont;
}			t_stack;

t_stack		*stack_ab(t_stack *stack, int argc, char *argv[]);
void		list(t_stack *stack, int i);
size_t		ft_strlen(const char *str);
void		ft_bzero(void *s, size_t n);
int			ft_isalpha(int c);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
int			ft_isdigit(char c);
void		ft_atoi(const char *str);
void		sort_stack_b(t_stack *stack, int argc, int nb);
void		sort_stack_a(t_stack *stack, int arg, int nb);
void		stack_c(t_stack *stack, int argc, int i, int j);
void		fonction_x(t_stack *stack, int argc, int *x, int *y);
void		fonction_y(t_stack *stack, int argc, int *x, int *y);
void		fonction_tow(t_stack *stack, int *j);
void		big_grand(t_stack *stack);
void		ft_rrb(t_stack *stack, int n);
void		ft_rb(t_stack *stack, int n);
void		ft_print(t_stack *stack, int argc);
void		infini_rendom(t_stack *stack, int argc, int j, int i);
void		ft_ra_pb(t_stack *stack, int n);
void		ft_ra(t_stack *stack, int n);
void		ft_pb(t_stack *stack, int n);
void		sort_long(t_stack *stack, int argc);
void		ft_rra(t_stack *stack, int n);
void		ft_pa(t_stack *stack, int n);
void		ft_sa(t_stack *stack);
void		three_random(t_stack *stack, int argc);
void		swap_ab(int argc, t_stack *stack);
void		sort_stack_a(t_stack *stack, int arg, int nb);
void		sort_long(t_stack *stack, int argc);
void		small(t_stack *stack);
void		ft_rrb(t_stack *stack, int n);
int			search(t_stack *stack, int x);
int			ft_characters(t_stack *stack, char *argv[]);
int			ft_order(t_stack *stack);
int			ft_double_number(t_stack *stack);
int			check_error(t_stack *stack, char *argv[]);
void		ft_max(t_stack *stack, char *argv[]);
void		main_utile(t_stack *stack, int argc, char *argv[]);

#endif