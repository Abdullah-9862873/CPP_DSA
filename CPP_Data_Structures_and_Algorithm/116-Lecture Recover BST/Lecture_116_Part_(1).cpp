/*
Strategy:
INorder of BST is in ascending order so we take that and recover original BST
we make three pointers: First, Mid, Last

Case 1: Swapped elements are not adjacent to each other

    eg: {1, 8, 3, 4, 5, 6, 7, 2}
    a)----> First: Previous node where first number < previous---> That is 8
    b)----> Mid: The first number where number < previous---> that is 3
    c)----> Last: Second number where number < previous---> that is 2

    Swap  First with Last

Case 2: Swapped elements are adjacent to each other

    eg: {1, 2, 4, 3, 5, 6, 7, 8}
    a)----> First: Previous node where first number < previous---> That is 4
    b)----> Mid: The first number where number < previous---> that is 3
    c)----> Last: NULL

    Swap first and mid value
*/

