// Write constructor to take input in one line

#include<iostream>
using namespace std;

class Student{
    string name;
    public:

    int age;
    bool gender;


    Student(){
        cout<<"Default Constructor"<<endl;
    } // Default Costructor

    Student(string s, int a, int g){
        cout<<"Parameterised Constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }   // Parameterised Constructor

    Student(Student &a){
        cout<<"Copy Constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }   // Deep copy constructor

    ~Student(){
        cout<<"Destructors Called"<<endl;
    }   // Destructor

    void printInfo(){
        cout<<"Name is: "<<name<<endl;
        cout<<"Age is: "<<age<<endl;
        cout<<"Gender is: "<<gender<<endl;
    }
};

int main(){
    Student a("Urvi", 20, 0);
    a.printInfo();
    Student b;  // This will call the default constructor
    Student c = a;
    c.printInfo();

    // if we write Student c = a; This will make a shallow copy constructor
    return 0;
}