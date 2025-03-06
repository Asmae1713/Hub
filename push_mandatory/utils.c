#include "push_swap.h"

t_stack *ft_min(t_stack *stack)
{
    t_stack *tmp;
    t_stack *min;

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

t_stack *ft_max(t_stack *stack)
{
  t_stack *tmp;
  t_stack *max;

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

void  ft_index(t_stack **stack, t_stack *node)
{
  t_stack *tmp;
  if(!stack || !*stack)
    return ;
  tmp = *stack;
  while (tmp)
  {
    if (tmp->value > node->value)
          tmp->index++;
    else
        node->index++;
    tmp = tmp->next;
  }
}

void  ft_position(t_stack **stack)
{
  t_stack *tmp;
  int       i;

  i = 0;
  tmp = *stack;
  while (tmp)
  {
    tmp->position = i;
    tmp = tmp->next;
    i++;
  }
}

int max_value(t_stack **stack)
{
	t_stack	*max;

	max = ft_max(*stack);
	return (max->position);
}