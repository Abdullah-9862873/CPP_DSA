#include<iostream>
using namespace std;

void TowerofHanoi(int n, char src, char dest, char helper){

    if(n==0){
        return;
    }

    TowerofHanoi(n-1, src, helper, dest);
    cout<<"move from "<<src<<" to "<<dest<<endl;
    TowerofHanoi(n-1, helper, dest, src);
}

int main(){
    TowerofHanoi(2, 'A', 'C', 'B');
    return 0;
}