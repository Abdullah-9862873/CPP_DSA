// push_back has another name caleed emplace_back
//  vec1.emplace_back(50, "fifty");

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template<typename T>
void printpairs(vector<T> vect){
    for(int i=0; i<vect.size(); i++){
        cout<<"{"<<vect.at(i).first<<", "<<vect.at(i).second<<"}; ";
    }
}

int main(){
    vector<pair<int, string>> vect1 = {{12, "twelve"}, {13, "thirteen"}, {20, "twenty"}};
    cout<<"The elements of vect1 are: "<<endl;
    printpairs(vect1);
    cout<<endl;

    vect1.push_back(make_pair(50, "fifty"));
    cout<<"The elements of vec1 after push back are: "<<endl;
    printpairs(vect1);

    return 0;
}