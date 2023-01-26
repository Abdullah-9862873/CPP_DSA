#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    bool gender;


    //  Copy Constructor
    Student(Student &a){
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    // Parameterised constructor
    Student(string s, int a, int g){
        name = s;
        age = a;
        gender = g;
    }

    bool operator == (Student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }else{
            return false;
        }
    }
};

int main(){
    Student a("Ahmed", 20, 1);
    Student c = a;
    if(c==a){
        cout<<"Same"<<endl;
    }else{
        cout<<"Not Same"<<endl;
    }
    return 0;
}