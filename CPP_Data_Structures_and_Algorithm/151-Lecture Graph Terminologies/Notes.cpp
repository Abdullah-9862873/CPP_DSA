/*
Directed Graph--->
        A graph in which there are one way edges or directed edges are present

Undirected Graph--->
        A graph in whcih two way edges or undirected edges are present

Adjacent Vertices--->
        Two vertices are said to be adjacent to one another if they have a direct
        edge connecting them

                            B
                          / | \
                         A  |  \
                            |   C
                            |  /
                            | /
                            D

        Here (A,B), (C, D), (B,D), (B,C)

Degree of a vertex--->
        There are two types of degrees--->
                    1---> InDegree
                    2---> OutDegree

        1--> InDegree--> Number of edges coming insides the node
        2--> OutDegree--> Number of edges going outside the node

Path Between two Vertex--->
        All the verex that comes inside the path of two given vertex are 
            known as path

Connected Graph--->
        Every node has a path to go to every other node

                B-----C
                 \    |
                  \   |
            A------E  |
                    \ |
                     \|
                      D
Disconnected Graph--->
        Every node does not have a path to go to every other node

        Single node is also disconnected graph

                    A ------B

                        C

                        D
                       / \
                      /   \
                     E-----F

Connected Components--->
        Every connected graph in a disconnected graph is known as connected
            components...

Cycles in a Graph--->
        Path from vertex to the same vertex in the graph

Cyclic Graph--->
        A graph which contains cycles

Acyclic Graph--->  
        A graph which does not contain a cycle

Tree--->
        Tree is a connected Acyclic Graph

        Properties---->
                1--->Every node has a path to every other node
                2---> Does not contain cycle
                3---> no. of edges are (n-1)


Directed Acyclic Graph (DAG)--->

        Properties--->
            1---> Directed Graph that means it has directed edges
            2---> Does not contain cycle

Complete Graph--->
        A graph is said to be complete if every vertex is connected with 
            every other vertex by direct edge

             A----B
             |\  /|
             | \/ |
             | /\ |
             C----D

        Properties--->
            1---> It has nC2 = (n*(n-1))/1 no. of edges

Weighted Graph--->
        A graph which has weight on its edges is called weighted graphs


Notes--->
1----> The adjacency matrix of an undirected simple graph is symmetric
2----> A graph with equal number of edges and vectices contains a cycle


*/