/*
** EPITECH PROJECT, 2017
** action.c
** File description:
**
*/

#include "my.h"

void pb(list_t **list_a, list_t **list_b)
{
    list_t *keep = (*list_a)->next;

    (*list_a)->next = *list_b;
    *list_b = *list_a;
    *list_a = keep;
    write(1, " pb", 3);
}

void pa(list_t **list_b, list_t **list_a)
{
    list_t *keep = (*list_a)->next;

    (*list_a)->next = *list_b;
    *list_b = *list_a;
    *list_a = keep;
    write(1, " pa", 3);
}

void sc(list_t **list_a, list_t **list_b)
{
    list_t *first_a = *list_a;
    list_t *second_a = (*list_a)->next;
    list_t *first_b = *list_b;
    list_t *second_b = (*list_b)->next;

    *list_a = (*list_a)->next->next;
    first_a->next = *list_a;
    second_a->next = first_a;
    *list_a = second_a;
    *list_b = (*list_b)->next->next;
    first_b->next = *list_b;
    second_b->next = first_b;
    *list_b = second_b;
    write(1, " sc", 3);
}

void sa(list_t **list)
{
    list_t *first = *list;
    list_t *second = (*list)->next;

    *list = (*list)->next->next;
    first->next = *list;
    second->next = first;
    *list = second;
    write(1, " sa", 3);
}

void sb(list_t **list)
{
    list_t *first = *list;
    list_t *second = (*list)->next;

    *list = (*list)->next->next;
    first->next = *list;
    second->next = first;
    *list = second;
    write(1, " sb", 3);
}
