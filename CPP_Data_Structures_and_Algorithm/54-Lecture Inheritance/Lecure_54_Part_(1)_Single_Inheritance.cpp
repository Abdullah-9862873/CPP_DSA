//  Single Inheritance

#include<iostream>
using namespace std;

class Base{
    public:

    void func(){
        cout<<"Successfully Inherited"<<endl;
    }
};

class Derived : public Base{

};

int main(){
    Derived a;
    a.func();

    return 0;
}