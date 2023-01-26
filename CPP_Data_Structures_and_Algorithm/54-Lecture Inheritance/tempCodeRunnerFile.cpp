// Hybrid Inheritance = Multiple + Multi Level Inheritance

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
class C{
    public:
    void C_function(){
        cout<<"This is a function of C class"<<endl;
    }
};
class D : public B, public C{
    public:
    void D_function(){
        cout<<"This is a function of D class"<<endl;
    }
};


int main(){
    D d;
    d.A_function();
    d.B_function();
    d.C_function();
    d.D_function();

    return 0;
}