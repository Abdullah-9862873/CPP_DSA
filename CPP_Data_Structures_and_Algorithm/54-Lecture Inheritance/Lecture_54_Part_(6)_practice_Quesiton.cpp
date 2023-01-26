/*
Question 1: Which type of inheritance is this?
Answer:     Multi Level inheritance

Question 2: Write the names of all members which are directly accessible by the member function Give() of 
            class Middle?
Answer:     Data member--> Labs, and Data Functions--> Take(), Give(), put(), get()

Question 3: Write the names of all members which are directly accessible by the member function Out() of 
            class Top?
Answer:     Data members-->Roof and Data Functions--> In(), Out(), Take(), Give()

Question 4: Write the names of all members which are directly accessible by the object T of class Top() 
            declared in main() function?
Answer:     Take(), Give(), In(), Out()
*/

#include<iostream>
using namespace std;

class Ground{
    int Rooms;
    protected:
        void put();
    public:
        void get();
};

// Here now inheritable members of ground are part of private members of Middle

class Middle : private Ground{
    int Labs;
    public:
        void Take();
        void Give();
};

class Top : public Middle{
    int Roof;
    public:
        void In();
        void Out();
};



int main(){


    return 0;
}