#include "push_swap.h"

void    sort_three(t_stack **sa)
{
    if((*sa)->value > (*sa)->next->value && (*sa)->value > (*sa)->next->next->value)
    {
        rotate(sa, "ra\n");
        if ((*sa)->value > (*sa)->next->value)
        swap(sa, "sa\n");
    }
    else if((*sa)->next->value > (*sa)->value && (*sa)->next->value > (*sa)->next->next->value)
     {
        rrotate(sa, "rra\n");
        if ((*sa)->value > (*sa)->next->value)
        swap(sa, "sa\n");
     }
     else if ((*sa)->value > (*sa)->next->value)
        swap(sa, "sa\n");
}

void    sort_five(t_stack **sa, t_stack **sb)
{
    t_stack *min_node;

    min_node = ft_min(*sa);
    while (min_node != *sa)
        rotate(sa, "ra\n");
    push_b(sa, sb, "pb\n");
    if (stack_size(*sa) == 4) 
    {
        min_node = ft_min(*sa);
        while (min_node != *sa)
            rotate(sa, "ra\n");
        push_b(sa, sb, "pb\n");
    }


    sort_three(sa);

    // Push back the numbers from B to A
    push_a(sa, sb, "pa\n");
    if (stack_size(*sb) > 0) 
        push_a(sa, sb, "pa\n");
}
int ft_sort(t_stack **sa, t_stack **sb, int size)
{
    int i;
    int j;

    i = 0;
    if (size <= 100)
        j = 16;
    else   
        j = 36;
    while ((*sa))
    {
        if ((*sa)->index <= i)
        {
            push_b(sa, sb, "pb\n");
            i++;
        }
        else if ((*sa)->index <= i + j)
        {
            push_b(sa, sb, "pb\n");
            rotate(sb, "rb\n");
            i++;
        }
        else
            rotate(sa, "ra\n");
    }
    return (ft_push(sa, sb), 0);
}

void ft_push(t_stack **sa, t_stack **sb)
{
    while ((*sb))
    {
        ft_position(sb);
        if (*sb == ft_max(*sb))
            push_a(sa, sb, "pa\n");
        else if (ft_max(*sb)->position <= stack_size(*sb) / 2)
            rotate(sb, "rb\n");
        else
            rrotate(sb, "rrb\n");
    }
}
