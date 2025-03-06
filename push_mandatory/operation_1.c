#include "push_swap.h"
#include <stdio.h>

void    rotate(t_stack **stack, char *str)
{
    t_stack *tmp;

    if (!(*stack) ||!(*stack)->next)
        return ;
 tmp = *stack;
 *stack = (*stack)->next;
 tmp->next = NULL;
 ft_add_back(stack, &tmp);
 if (str)
    write (1, str, ft_strlen(str));
}
void    rr(t_stack **sa, t_stack **sb)
{
    rotate(sa, NULL);
    rotate(sb, NULL);
    write (1, "rr\n", 3);
}

void    rrotate(t_stack **stack, char *str)
{
    t_stack *tmp;
    t_stack *find;

    if (!*stack ||!(*stack)->next)
        return ;
    tmp = ft_last(*stack); 
    find = *stack;
    while (find->next->next)
        find = find->next;
    find->next = NULL;
    ft_add_front(stack, tmp);
    if (str)
    write (1, str, ft_strlen(str));
}

void    rrr(t_stack **sa, t_stack **sb)
{
    rrotate(sa, NULL);
    rrotate(sb, NULL);
    write (1, "rrr\n", 4);
}