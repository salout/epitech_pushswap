/*
** EPITECH PROJECT, 2017
** action_next.c
** File description:
**
*/

#include "my.h"

void rra(list_t **list_a)
{
    list_t *keep = *list_a;
    list_t *last;

    for (; keep->next->next != NULL; keep = keep->next);
    last = keep->next;
    keep->next = NULL;
    last->next = *list_a;
    *list_a = last;
    write(1, " rra", 4);
}

void rb(list_t **list_b)
{
    list_t *first = *list_b;
    list_t *keep = (*list_b)->next;

    for (; (*list_b)->next != NULL; *list_b = (*list_b)->next);
    first->next = NULL;
    (*list_b)->next = first;
    *list_b = keep;
    write(1, " rb", 3);
}

void ra(list_t **list_a)
{
    list_t *first = *list_a;
    list_t *keep = (*list_a)->next;

    for (; (*list_a)->next != NULL; *list_a = (*list_a)->next);
    first->next = NULL;
    (*list_a)->next = first;
    *list_a = keep;
    write(1, " ra", 3);
}

void rrr(list_t **list_a, list_t **list_b)
{
    list_t *keep_b = *list_b;
    list_t *last_b;
    list_t *keep_a = *list_a;
    list_t *last_a;

    for (; keep_b->next->next != NULL; keep_b = keep_b->next);
    last_b = keep_b->next;
    keep_b->next = NULL;
    last_b->next = *list_b;
    *list_b = last_b;
    for (; keep_a->next->next != NULL; keep_a = keep_a->next);
    last_a = keep_a->next;
    keep_a->next = NULL;
    last_a->next = *list_a;
    *list_a = last_a;
    write(1, " rrr", 4);
}

void rrb(list_t **list_b)
{
    list_t *keep = *list_b;
    list_t *last;

    for (; keep->next->next != NULL; keep = keep->next);
    last = keep->next;
    keep->next = NULL;
    last->next = *list_b;
    *list_b = last;
    write(1, " rrb", 4);
}
