#include "push_swap.h"

t_stack    *ft_last(t_stack *stack)
{
    if (!stack)
        return (NULL);
    while (stack->next != NULL)
        stack = stack->next;
    return (stack);
}

void    ft_add_back(t_stack **stack, t_stack **new)
{
    if (!stack || !new)
        return ;
    if (*stack)
    ft_last(*stack)->next = *new;
    else
        *stack = *new;
}

void    ft_add_front(t_stack **stack, t_stack *new)
{
    if (!stack || !new)
        return ;
    new -> next = *stack;
    *stack = new;
}

t_stack    *ft_stack_new(int value)
{
    t_stack    *new;

    new = (t_stack *)malloc(sizeof(t_stack));
    if (!new)
        return (NULL);
    new->value = value;
    new->next = NULL;
    return (new);
}
int stack_size(t_stack *stack)
{
    int count;
    count = 0;
    while (stack)
    {
        count++;
        stack = stack->next;
    }
    return (count);
}