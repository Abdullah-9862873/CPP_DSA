// Count the number of paths possible from starting point to 
// ending point in game board

#include<iostream>
using namespace std;

int countpath(int s, int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    
    int count = 0;
    for(int i=1; i<=6; i++){
        count += countpath(i+s, e);
    }
    return count;
}

int main(){
    cout<<countpath(0, 3)<<endl;

    return 0;
}