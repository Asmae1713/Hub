/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asbouani <asbouani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 13:53:02 by asbouani          #+#    #+#             */
/*   Updated: 2025/03/09 16:35:24 by asbouani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_min(t_stack *stack)
{
	t_stack	*tmp;
	t_stack	*min;

	if (!stack)
		return (NULL);
	tmp = stack;
	min = tmp;
	while (tmp)
	{
		if (tmp->value < min->value)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}

t_stack	*ft_max(t_stack *stack)
{
	t_stack	*tmp;
	t_stack	*max;

	if (!stack)
		return (NULL);
	tmp = stack;
	max = tmp;
	while (tmp)
	{
		if (tmp->value > max->value)
			max = tmp;
		tmp = tmp->next;
	}
	return (max);
}

void	ft_index(t_stack *stack, t_stack *node)
{
	t_stack	*tmp;

	if (!stack ||!node)
		return ;
	tmp = stack;
	while (tmp)
	{
		if (tmp->value > node->value)
			tmp->index++;
		else if (tmp->value < node->value)
			node->index++;
		tmp = tmp->next;
	}
}

void	ft_position(t_stack **stack)
{
	int		i;
	t_stack	*tmp;

	if (!stack ||!*stack)
		return ;
	i = 0;
	tmp = *stack;
	while (tmp)
	{
		tmp->position = i;
		tmp = tmp->next;
		i++;
	}
}

int	max_positon(t_stack **stack)
{
	t_stack	*max;

	max = ft_max(*stack);
	return (max->position);
}
