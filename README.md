# epitech_pushswap
display a list of specifique action to sort a list of number.

there is two list of number :

l_a, the list given as argument.

l_b, a empty list.

# Requirements
MAKE GCC

# usage
go to the root and use MAKE to creat the "push_swap" binary

./push_swap [list_of_number]

exemple : ./push_swap 4 3 9 48 1 21

# action
the program will display a list of action, here is the action.

sa :
swap the first two elements of l_a (nothing will happen if there aren’t enough elements).

sb :
swap the first two elements of l_b (nothing will happen if there aren’t enough elements).

sc :
sa and sb at the same time.

pa :
take the first element from l_b and move it to the first position on the l_a list (nothing will happen if
l_b is empty).

pb :
take the first element from l_a and move it to the first position on the l_b list (nothing will happen if
l_a is empty).

ra :
rotate l_a toward the beginning, the first element will become the last.

rb :
rotate l_b toward the beginning, the first element will become the last.

rr :
ra and rb at the same time.

rra :
rotate l_a toward the end, the last element will become the first.

rrb :
rotate l_b toward the end, the last element will become the first.

rrr :
rra and rrb at the same time.
