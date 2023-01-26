/*
Polymorphism--> Many forms
Polymorphism Types----> 1)Compile time    
                        2) Run time
Compile Time--->Types--->   1)Function overloading
                            2)Operator Overloading
Run Time --->Types--->      1)Virtual Functions

Function overloading----> Function overloading is when there are different functions with the same name
                            but having different type arguments or different number of arguments


*/
#include<iostream>
using namespace std;

class A{
    public:
        void func(){
            cout<<"This is a function with no argument"<<endl;
        }
};

class B{
    public:
        void func(int x){
            cout<<"This is a function with integer argument"<<endl;
        }
};

class C{
    public:
        void func(double){
            cout<<"This is a function with double argument"<<endl;
        }
};

int main(){


    return 0;
}