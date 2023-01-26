//  Multi level Inheritance

#include<iostream>
using namespace std;

class A{
    public:
    void A_function(){
        cout<<"This is a function of A class"<<endl;
    }
};

class B : public A{
    public:
    void B_function(){
        cout<<"This is a function of B class"<<endl;
    }
};

class C : public B{

};

int main(){
    C c;
    c.A_function();
    c.B_function();

    return 0;
}