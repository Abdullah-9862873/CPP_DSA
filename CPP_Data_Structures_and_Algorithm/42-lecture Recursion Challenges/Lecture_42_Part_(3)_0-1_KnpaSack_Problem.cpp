#include<iostream>
using namespace std;

int KnapSack(int value[], int wt[], int n, int w){
    
    if(n==0 || w==0){
        return 0;
    }
    if(wt[n-1] > w){
        return KnapSack(value, wt, n-1, w);
    }
    return max(KnapSack(value, wt, n-1, w), KnapSack(value, wt, n-1, w-wt[n-1])+value[n-1]);
}

int main(){
    int wt[] = {10, 20, 30};
    int value[] = {100, 50, 150};
    int n = 3;
    int w = 50;

    cout<<KnapSack(value, wt, n, w)<<endl;
    return 0;
}