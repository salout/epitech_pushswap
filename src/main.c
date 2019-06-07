/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** project
*/

#include "my.h"

void ra_spe(list_t **list_a)
{
    list_t *first = *list_a;
    list_t *keep = (*list_a)->next;

    for (; (*list_a)->next != NULL; *list_a = (*list_a)->next);
    first->next = NULL;
    (*list_a)->next = first;
    *list_a = keep;
    write(1, "ra", 2);
}

void sort_after_sep(list_t **list_a, int sep)
{
    list_t *last = get_last(*list_a);
    unsigned long int x = 1;

    for (; last->next != NULL; last = last->next);
    if ((*list_a)->next->data > sep && (*list_a)->data > (*list_a)->next->data)
        sa(list_a);
    else if (last->data == sep)
        ra(list_a);
    else if (last->data > (*list_a)->data) {
        while (last->data > (*list_a)->data) {
            rra(list_a);
            sa(list_a);
            x++;
            last = get_last(*list_a);
        }
        for (; x != 0; x--)
            ra(list_a);
    } else
        ra(list_a);
}

void sort_before_sep(list_t **list_a, list_t **list_b, int sep)
{
    unsigned long int x = 1;

    if ((*list_a)->next->data < sep && (*list_a)->data < (*list_a)->next->data)
        sa(list_a);
    else if (*list_b == NULL)
        pb(list_a, list_b);
    else if ((*list_b)->data > (*list_a)->data) {
        while ((*list_b) != NULL && (*list_b)->data > (*list_a)->data) {
            pa(list_a, list_b);
            sa(list_a);
            x++;
        }
        for (; x != 0; x--)
            pb(list_a, list_b);
    } else
        pb(list_a, list_b);
}

list_t *algo(list_t *list_a)
{
    list_t *list_b = NULL;
    int sep = list_a->data;

    if (list_is_sort(list_a) == 1)
        return (list_a);
    ra_spe(&list_a);
    while (list_is_sort(list_a) != 1 && list_a->data != sep) {
        if (list_a->data > sep)
            sort_after_sep(&list_a, sep);
        else
            sort_before_sep(&list_a, &list_b, sep);
    }
    while (list_b != NULL) {
        pa(&list_a, &list_b);
    }
    return (list_a);
}

int main(int ac, char **av)
{
    list_t *list_a = NULL;

    for (int x = ac - 1; x > 0; x--)
        add_begin(my_getnbr(av[x]), &list_a);
    if (ac < 3) {
        my_putchar('\n');
        return (0);
    }
    list_a = algo(list_a);
    my_putchar('\n');
    return (0);
}
