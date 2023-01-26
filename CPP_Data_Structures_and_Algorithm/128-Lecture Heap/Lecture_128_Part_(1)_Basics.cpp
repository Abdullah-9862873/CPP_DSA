/*
Heap is a complete Binary tree that satisfies heap properties

Heap Properties--->
            1) Whether it should satisfy min heap property
            2) Or max heap property

Min heap---> Min heap is the type of heap in which the root element is minimum
Max Heap---> Root element is maximum

Notes--->
1---> In heap the array index starts from 1
        eg arr[] = {50, 30, 40, 10, 5, 20, 30}

                            50
                           /  \
                          30   40
                         /  \  / \
                        10  5 20 30

        if it is max heap then index of 50 is 1

        1.1)---> If node is at i
                ----> It's parent can be accessed by (i/2) if  indexing and (i-1)/2 if 0 indexing
                ---->Left child is (2*i) for one indexing but for zero indexing it is 2*i + 1
                ----> Right child is (2*i)+1 for one indexing but for zero indexing it is 2*i + 2
        1.2)----> Value of parent node is size/2-1 if zero indexing and size/1 if 1 indexing

2---> Insertion is done from last done
        ---> Insertion of 60 needs it to be place on the leaf node on extreme left
                            50
                           /  \
                          30   40
                         /  \  / \
                        10  5 20 30
                       /
                      60
        ---> We check if parent node is lesser than it... If it is then swap
        ---> Now as it is max heap so we check its parent node by i/2
        ---> Then we swap them and similarly we keep swapping
                            60
                           /  \
                          50   40
                         /  \  / \
                        30  5 20 30
                       /
                      10
3---> Deletion is done by first node
        ---> Deletion of 50 needs to put 30 in place of 50 and delete 30
        ---> As it is max heap so child should be less than parent so
                we swap 30 with 40 as 40 is the largest child node
        ---> Now it is a max heap tree as parent nodes are greater then child
                            40
                           /  \
                          30   30
                         / \   /
                        10  5 20

4---> Time complexity of insert and delete is O(Logn)
5---> As height of complete binary tree is logn

*/