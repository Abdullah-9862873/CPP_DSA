#include<iostream>
using namespace std;

int TilingWays(int n){
    // Base Condition
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    // number of rows are fixed that is 2 columns are n
    // n-1 ---> if we place them verticalyy
    // n-2 ---. if we place them horizontally--> it is covering two columns so n-2
    return TilingWays(n-1) + TilingWays(n-2);
}

int main(){
    cout<<TilingWays(4)<<endl;

    return 0;
}