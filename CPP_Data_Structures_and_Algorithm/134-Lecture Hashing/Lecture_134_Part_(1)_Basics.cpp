/*
Hashing---> A file is having a very large data, hashing is used to convert this large data let's say large string value
            to a short length value that represent the original string. Hashing is used to index and retrieve 
            information from database and it helps to accelerate the process of finding the key because you don't have 
            to traverse the whole array you will find the element using its shorter hashed key...

Formula of Hashing by division method---> H(K) = K % m
                    k---> Key
                    m--->Size of hash table

Other methods--->
                    1---> Division Method
                    2----> Mid Square Method
                    3---->Folding method

Hash Table---> Hash table is a data structure that helps to store data in associative manner. In hash table data 
                is stored in array format and each data value has its unique index value...

Collision ----> Collsion occurs when more than one value to be hashed by a hash function hash to same slot of hash table

Types of Hashing--->

        1)---> Open Hashing (Closed Addressing)
        2)---> Closed Hashing (Open Addressing)

        Open Chaining----> To resolve collision "Seperate Chaining" is used in this type
        Closed Hashing----> To resolve collion three techniques are used
                            1---> Linear Probing
                            2---> Quadratic Probing
                            3---> Double Hashing


Seperate Chaining----> Seperate chaining is implemented using linked list. This method combines a linked list with
                        hash table in order to resolve collision. 
                        When another key refers to same index we make chain and linked list to store the second key
                        Similarly if another key occurs that point to same address again we again make a chain
                        from second value to third value... The next of second stores the address of the third 
                        value and the next of third is Null now.


----Open Addressing has three methods to resolve collision but by default is linear probing-----
---- Probing means KHOJ KARNA----
---- Prob----> No of jumps we took while assiging an element a particular index in hash table----

Linear Probing--->One method for resolving collisions looks into the hash table and tries to find another
                    open slot to hold the item that caused the collision. A simple way to do this is to start
                    at the original hash value position and then move in a sequential manner through the slots
                    until we encounter the first slot that is empty. Note that we may need to go back to the first
                    slot (circularly) to cover the entire hash table. This collision resolution process is referred 
                    to as open addressing in that it tries to find the next open slot or address in the hash table.

                    Formula of finding place while liner probing is---> 
                                Insert K at first free location from (u + i) % m where i range from 0 to (m-1) and 
                                        u is the location 

                                        Let's say it is given that 
                                                                H(K) = 2K + 3
                                        And we have the array given 
                                                                3, 2, 9, 6, 11, 13, 7, 12
                                        u of 3 is (2(3) + 3) = 9

Quadratic Probing----> In case of collion we use following method
                     Insert K at the first free location from ((u + i^2) % m) where i range from 0 to (m-1)


                     No of probes in quadratic probing are less than linear so quadratic is better than linear


Double Hashing--->  The first hash function determines the initial location to located the key and the second
                    hash function is to determine the size of the jumps in the probe sequence.

                    In double hashing two formulas of hash are given... One is to calculate the u and the other is
                    only to caluclate v in case of collion... 

                    Insert K at first free location from ((u + v * i) % m) where i range from 0 to (m-1)

                    v = h2(K) % m... Let's say
                                             H1(K) = 2K + 3
                                             H2(K) = 3K + 1
                                             where k is the key value
*/