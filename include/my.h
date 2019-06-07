/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my.h
*/

#ifndef _MY_H_
#define _MY_H_

#include "struct.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int my_getnbr(char const *);
int my_put_nbr(int);
void my_putchar(char);
void add_begin(int, list_t **);
void my_putlist(list_t *);
int my_putstr(char const *);
int my_strlen(char const *);
int list_len(list_t *);
int list_is_sort(list_t *);
list_t *get_last(list_t *);
void sa(list_t **);
void pb(list_t **, list_t **);
void sb(list_t **);
void sc(list_t **, list_t **);
void pa(list_t **, list_t **);
void rra(list_t **);
void rrb(list_t **);
void rrr(list_t **, list_t **);
void ra(list_t **);
void rb(list_t **);

#endif
