/*
** EPITECH PROJECT, 2017
** double_chaine_list.c
** File description:
**
*/

#include "../../include/my.h"

void add_begin(int d, list_t **list)
{
    list_t *temp = malloc(sizeof (list_t));

    temp->data = d;
    temp->next = *list;
    *list = temp;
}

list_t *get_last(list_t *list_a)
{
    list_t *last = list_a;

    for (; last->next != NULL; last = last->next);
    return (last);
}

int list_is_sort(list_t *list_a)
{
    for (; list_a->next != NULL; list_a = list_a->next)
        if (list_a->data > list_a->next->data)
            return (0);
    return (1);
}

int list_len(list_t *list)
{
    unsigned long int res = 0;

    for (; list != NULL; list = list->next)
        res++;
    return (res);
}

void my_putlist(list_t *list)
{
    for (; list != NULL; list = list->next) {
        my_put_nbr(list->data);
        my_putchar(' ');
    }
}
