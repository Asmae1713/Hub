/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbouani <asbouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:32:07 by asbouani          #+#    #+#             */
/*   Updated: 2025/03/09 15:21:28 by asbouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack, char *str)
{
	t_stack	*tmp;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	tmp->next = *stack;
	*stack = tmp;
	if (str)
		write (1, str, ft_strlen(str));
}

void	ss(t_stack **sa, t_stack **sb)
{
	swap(sa, NULL);
	swap(sb, NULL);
	write(1, "ss\n", 4);
}

void	push_a(t_stack **sa, t_stack **sb, char *str)
{
	t_stack	*tmp;

	if (!*sb)
		return ;
	tmp = *sb;
	*sb = (*sb)->next;
	tmp->next = NULL;
	ft_add_front(sa, tmp);
	if (str)
		write (1, str, ft_strlen(str));
}

void	push_b(t_stack **sa, t_stack **sb, char *str)
{
	t_stack	*tmp;

	if (!*sa)
		return ;
	tmp = *sa;
	(*sa) = (*sa)->next;
	tmp->next = NULL;
	ft_add_front(sb, tmp);
	if (str)
		write (1, str, ft_strlen(str));
}
