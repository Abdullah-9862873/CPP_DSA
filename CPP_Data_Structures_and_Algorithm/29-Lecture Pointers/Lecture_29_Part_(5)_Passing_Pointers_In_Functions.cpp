/*
    You can also do this by passing swap(&a, &b)

    We do this because if we pass values then it will not swap 
    so we pass the addresses to make the changes
*/

#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int a=2;
    int b=4;

    int* a_ptr = &a;
    int* b_ptr = &b;

    swap(a_ptr, b_ptr);
    cout<<a<<" "<<b<<endl;
    return 0;
}
