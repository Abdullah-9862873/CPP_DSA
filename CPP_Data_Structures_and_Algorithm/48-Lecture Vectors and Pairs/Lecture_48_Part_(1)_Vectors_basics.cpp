#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    } // 1 2 3
    cout<<"---------------"<<endl;


    vector<int> :: iterator it;
    for(it=v.begin(); it<v.end(); it++){
        cout<<*it<<endl;
    } // 1 2 3
    cout<<"---------------"<<endl;


    for(auto element:v){
        cout<<element<<endl;
    } // 1 2 3
    cout<<"---------------"<<endl;



    v.pop_back();   
    for(auto element:v){
        cout<<element<<endl;
    } // 1 2
    cout<<"---------------"<<endl;


    vector<int> v2(3, 50);
    vector<int> :: iterator a1;
    for(a1=v2.begin(); a1<v2.end(); a1++){
        cout<<*a1<<endl;
    } // 50 50 50
    cout<<"---------------"<<endl;


    swap(v, v2);
    cout<<"The elements of v now are: "<<endl;
    for(auto value:v){
        cout<<value<<endl;
    }
    cout<<"The elements of v2 are: "<<endl;
    for(auto value:v2){
        cout<<value<<endl;
    }
    cout<<"---------------"<<endl;

    vector<int> unsorted_values;
    unsorted_values.push_back(5);
    unsorted_values.push_back(4);
    unsorted_values.push_back(3);
    unsorted_values.push_back(2);
    unsorted_values.push_back(1);

    sort(unsorted_values.begin(), unsorted_values.end());
    vector<int> :: iterator b2;
    for(b2=unsorted_values.begin(); b2<unsorted_values.end(); b2++){
        cout<<*b2<<endl;
    }
    cout<<"---------------"<<endl;

    return 0;
}