/*
    Here the base pointer is pointing towards the objects of derived class but it is printing the 
    functions of base class... So in order to change the form during runtime we use virtual before the function.

    So during runtime when we give the address. Then it starts binding and then prints the result...

Vietual---->When same functions are present in the derived class and the base class then the function before which
            virtual is written in not called.
*/

#include<iostream>
using namespace std;

class Base{
    public:
         virtual void print(){
            cout<<"This is the print function of base class"<<endl;
        }

        void display(){
            cout<<"This is the display function of base class"<<endl;
        }
};

class Derived : public Base{
    public:
        void print(){
            cout<<"This is the print funciton of derived class"<<endl;
        }

        void display(){
            cout<<"This is the display function of derived class"<<endl;
        }
};

int main(){
    Base *ptr;
    Derived obj;
    ptr = &obj;

    ptr -> print();
    ptr -> display();

    return 0;
}