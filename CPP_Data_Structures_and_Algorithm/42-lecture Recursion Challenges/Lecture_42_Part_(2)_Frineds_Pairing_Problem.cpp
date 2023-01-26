#include<iostream>
using namespace std;

int FriendsPair(int n){

    if(n==0 || n==1 || n==2){
        return n;
    }

    return FriendsPair(n-1) + FriendsPair(n-2)*(n-1);
}

int main(){
    cout<<FriendsPair(4)<<endl;

    return 0;
}