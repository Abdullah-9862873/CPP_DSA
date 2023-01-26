/*
Dynamic Programming--->
        Dynamic Programming is a technique in computer programming that helps to efficiently solve a class of 
        problems that have overlapping subproblems and optimal substructure property.

Properties of Dynamic Programming--->
                1----> Optimal Substructure
                2----> Overlapping SubProblem


1--> Optimal Substructure--->
            If we can write a recurrence relation then a problem is said to have optimal substructure

            if the optimal solution of the given problem can be obtained by using the optimal solution 
            to its subproblems instead of trying every possible way to solve the subproblems.

            We divide the structure into substructure and we find the optimal solution of a substructure
            that help us to find the optimal solution of a bigger problem that means of whole structre.

            https://www.youtube.com/watch?v=xsQWnptp0vM

            Remember the Shortest parth and longest path between A and D in (A, B, C, D, E)


2--> Overlapping SubProblem--->
            If a subproblem repeat, then a problem is said to have overalapping subproblem

            used where the solutions of the same sub-problems are required again and again


Notes--->
1---> If a problem has only optimal substructure property then you can use Greedy Algorithm
        But if it has both optimal substructure and overlapping subproblem then you can use DP


Ways to handle Overlapping subproblem---->
                        1--> Memoization (Top Down)
                        2--> Tabulation (Bottom Up)

1---> Memoization---> A lookup table is mantained... It uses recursion...

                     Whenever a subproblem is solved it is stored in the lookup table so when we encounter
                        same problem again we just take that answer of computation from that lookup table...

2---> Tabulation---> Solution is built from base... It uses iterative method

Where you can use Dynamic Programming----->Tips---->

1---> Maximization problem and minimization problems are generally solved with DP...
2---> Problems that include "Find the number of ways" are solved with DP
3--->Whenever we find recursive relation in the problem we can use DP but not in some cases...


Notes of DP by college
                https://drive.google.com/drive/folders/1-FqbksIVQKZlhcbXkKgLs4cEHDyeWyTy
*/