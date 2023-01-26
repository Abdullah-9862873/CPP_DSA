//  Hierarchical Inheritance

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
class C : public A{
    public:
    void C_function(){
        cout<<"This is a function of C class"<<endl;
    }
};
class D : public B{
    public:
    void D_function(){
        cout<<"This is a function of D class"<<endl;
    }
};
class E : public B{
    public:
    void E_function(){
        cout<<"This is a function of E class"<<endl;
    }
};
class F : public C{
    public:
    void F_function(){
        cout<<"This is a function of F class"<<endl;
    }
};
class G : public C{
    public:
    void G_function(){
        cout<<"This is a function of G class"<<endl;
    }
};


int main(){
    //G can only access C, A, G
    //F can access A, C, F
    //E can access A, B, E
    //D can access A, B, D
    //C can access A, C
    //B can access A, B
    //A can access A

    return 0;
}