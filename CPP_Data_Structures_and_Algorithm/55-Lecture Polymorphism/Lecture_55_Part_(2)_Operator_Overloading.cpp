/*
You have to overload the operator and define the functionality of operator in order to make it work

In this case plus(+) operator is overloaded
*/


#include<iostream>
using namespace std;

class Complex{
    private:
        int real, imag;
    public:
        //Constructor
        Complex(int r, int i){
            real = r;
            imag = i;
        }

        // Operator Overloading
        Complex operator + (Complex &a){
            Complex result;
            result.imag = imag + a.imag;
            result.real = real + a.real;
            return result;
        }

        void display(){
            cout<<real<<" + "<<imag<<"i"<<endl;
        }

        // Default Constructor
        Complex(){};
};

int main(){
    Complex a(12, 6);
    Complex b(6, 7);

    Complex c = a+b;
    c.display();

    return 0;
}