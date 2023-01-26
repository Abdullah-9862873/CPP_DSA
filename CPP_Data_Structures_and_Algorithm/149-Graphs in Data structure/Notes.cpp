/*
Graphs--->
    A graph data structure is a collection of nodes that have data and are 
        connected to other nodes.

    Let's try to understand this through an example. On facebook, everything 
    is a node. That includes User, Photo, Album, Event, Group, Page, Comment, 
    Story, Video, Link, Note...anything that has data is a node.

Nodes--->
    Nodes are states or vertices... Example users in facebook

Edge--->
    Every relationship is an edge from one node to another. 
    Whether you post a photo, join a group, like a page, etc., 
    a new edge is created for that relationship.

Types of Edges--->
                1- Undirectional Edges
                2- Directional Edges

Undirectional Edges--->
    Two Way Edges... i-e Direction not fixed
Directional Edges---->
    One way Edge


Representation of Graphs--->
            1--> Adjacency Matrix
            2--> Adjacency Lists

Terminologies---->
1- Adjacency---> A vertex is said to be adjacent to another vertex if there is 
                    an edge connecting them.

2- Path ---> A sequence of edges that allows you to go from vertex A to vertex 
                B is called a path.

3- Directed Graphs---> A graph in which an edge (u,v) doesn't necessarily mean 
                        that there is an edge (v, u) as well.

_____________________________________________________________________

1---> Adjacency Matrix---> An adjacency matrix is a 2D array of V x V vertices. 
        Each row and column represent a vertex.

        If the value of any element a[i][j] is 1, it represents that there is 
            an edge connecting vertex i and vertex j.

        It gives symmetric matrix

2---> Adjacency List---> An adjacency list represents a graph as an array 
                            of linked lists.

                        Each A[i] is a list of node x reachable from i

Notes----> https://www.programiz.com/dsa/graph


*/