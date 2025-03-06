#include "push_swap.h"

void    free_stack(t_stack **stack)
{
    t_stack *tmp;
    
    while (*stack)
    {
        tmp = (*stack);
        *stack = (*stack)->next;
        free(tmp);
    }
}
int is_num(char *str)
{
    int i;

    i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    if (!str[i])
        return (0);
    while (str[i])
    {
        if (!ft_isdigit(str[i]))
            ft_error("Error\n");
        i++;
    }
    return (1);
}

int is_duplicate(t_stack *stack, int nb)
{
    while (stack)
    {
        if (stack->value == nb)
            return (1);
        stack = stack->next;
    }
    return (0);
}
void    check_args(char *av, t_stack **stack_a)
{
    int     j;
    int     nb;
    char    **str;
    t_stack *node;

        str = ft_split(av, ' ');
        if (!str)
            exit(1);
        j = 0;
        while (str[j])
        {
            is_num(str[j]);
            nb = ft_atoi(str[j]);
            if (is_duplicate(*stack_a, nb))
                ft_error("Error\n");
            node = ft_stack_new(nb);
            ft_add_back((stack_a), &node);
            free(str[j]);
            j++;  
        }
        free(str);
    }

int main(int ac, char **av)
{ 
    t_stack *a;
    t_stack *b;
    int     i;
  
    a = NULL;
    b = NULL;
    i = 1;
    if (ac == 1)
        return (0);
    while (i < ac)
    {
        if (av[i][0] == '\0') // Check for empty argument
            ft_error("Error\n");
        check_args(av[i], &a);
        i++;
    }
    if (ac == 4)
        sort_three(&a);
    else if (ac > 4 && ac <= 6)
        sort_five(&a, &b);
    else if (ac > 6)
        ft_sort(&a, &b,stack_size(a));
    free_stack(&a);
}