// By default the instances or objects are private and you can access them by set and get

#include<iostream>
using namespace std;

class Student{
    string name;
    public:
    
    void setName(string s){
        name = s;
    }

    void getName(){
        cout<<name<<endl;
    }
};

int main(){
    Student arr[2];

    for(int i=0; i<2; i++){
        cout<<"Name = ";
        string s;
        cin>>s;
        arr[i].setName(s);
        arr[i].getName();    
    }

    return 0;
}