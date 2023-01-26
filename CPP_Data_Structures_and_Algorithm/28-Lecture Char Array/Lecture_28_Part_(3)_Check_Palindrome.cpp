/* 
Palindrome are the character string that if we read from last to first
they sound the same. For example "NITIN", "ANNA" etc
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of word: "<<endl;
    cin>>n;
    char arr[n+1];
    cout<<"Enter the word: "<<endl;
    cin>>arr;

    int size = sizeof(arr);
    bool check = false;
    for(int i=0; i<=n-1; i++){
        if(arr[i] == arr[n-1-i]){
            check = true;
        }
    }

    if(check){
        cout<<"Yes it is a palindrome"<<endl;
    }    
    else{
        cout<<"It is not a palindrome"<<endl;
    }
    return 0;
}
