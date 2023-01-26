#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    bool gender;

    void printInfo(){
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Gender = "<<gender<<endl;
    }
};

int main(){
    // For one student
    // student a;
    // a.name = 'Ahmed';
    // a.age = 20;
    // a.gender = 0;

    //For many students
    int n;
    cout<<"Enter the number of students: "<<endl;
    cin>>n;
    student arr[n];

    for(int i=0; i<n; i++){
        cout<<"For "<<i+1<<" student"<<endl;
        cout<<"Enter the name: "<<endl;
        cin>>arr[i].name;
        cout<<"Enter the Age: "<<endl;
        cin>>arr[i].age;
        cout<<"Enter the gender 1 for male and 0 for female: "<<endl;
        cin>>arr[i].gender;
    }

    for(int i=0; i<n; i++){
        arr[i].printInfo();
    }

    return 0;
}