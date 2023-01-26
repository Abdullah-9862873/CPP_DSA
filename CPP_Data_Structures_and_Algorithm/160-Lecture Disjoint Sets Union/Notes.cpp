/*
Notes--->
        1--->Sets in DSU are represented with a parent... For Example
                set P = {1, 2, 3, 4}

                Let' say parent of set P is 2... Now to check if 1 and 2 lie on same set of not we check their parents
                        parent of 1 = parent of 2 = parent of 3 = parent of 4 = 2

            
Sets--->
        Organised collection of objects that can be represented in set builder notation.

DSU (Disjoint Sets Union)--->

        Two sets are called disjoint sets if they don’t have any element in common, the intersection of sets 
                is a null set.

        Following operations are performed in DSU--->
            1---> Adding new set to disjoint sets
            2---> Merging disjoint sets to a single set using Union operation
            3---> Finding representative of disjoint set using Find Operation
            4---> Check if two sets are disjoint or not

        Time complexity of simple find function is O(N);

Path Compression(Modification to Find)--->
        1--->It speeds up the data structure by compressing the height of the trees. 
                It can be achieved by inserting a small caching mechanism into the Find operation.

        2---> We make the parent of the set, the parent of every element
                parent[v] = find_set(parent[v]);


        3---> Reduces time complexity to O(n Log n)

Union by Size/Rank--->


        1--->`Size by Rank allows to reduce the time complexity to O(α (n))

        2--->   α---> Inverse Ackermann Function
                    This is aplha(α) 

        3--->We check the size to determine which disjoiint set has larger size
                Then we add the disjoint set with smaller size to the disjoint set with larger size
                In this way we use less operations and thus time complexity is reduces
*/