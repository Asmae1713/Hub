#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_stack
{
    int value;
    int index;
    int position;
    struct s_stack *next;
}t_stack;

int ft_error(char *str);
int ft_sort(t_stack **sa, t_stack **sb, int size);
void ft_push(t_stack **sa, t_stack **sb);
int max_value(t_stack **stack);
void  ft_position(t_stack **stack);
void  ft_index(t_stack **stack, t_stack *node);
t_stack     *ft_max(t_stack *stack);
t_stack     *ft_min(t_stack *stack);
t_stack    *ft_stack_new(int  value);
t_stack    *ft_last(t_stack *stack);
void    ft_add_front(t_stack **stack, t_stack *new);
void    ft_add_back(t_stack **stack, t_stack **new);
int     ft_isdigit(int c);
int     ft_strlen(char *str);
int     ft_atoi(const char *str);
char    **ft_split(char const *s, char c);
int     main(int ac, char **av);
void    swap(t_stack **stack, char *str);
void    ss(t_stack **sa, t_stack **sb);
void    push_a(t_stack **sa, t_stack **sb, char *str);
void    push_b(t_stack **sa, t_stack **sb, char *str);
void    rotate(t_stack **stack, char *str);
void    rr(t_stack **sa, t_stack **sb);
void    rrotate(t_stack **stack, char *str);
void    rrr(t_stack **sa, t_stack **sb);
int     stack_size(t_stack *stack);
void    sort_three(t_stack **sa);
void    sort_five(t_stack **sa, t_stack **sb);


#endif