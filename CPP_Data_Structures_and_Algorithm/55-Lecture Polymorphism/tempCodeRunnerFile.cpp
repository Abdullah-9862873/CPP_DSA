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