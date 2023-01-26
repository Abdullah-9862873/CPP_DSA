/*
There will be following cases:
Case_1---> Both digits are 0
            Further-Cases----> Case 1--> No prev carry-->return 0
                                Case 2--> Prev Carry --> return 1
            No carry Generated

Case_2---> One digit is 0 and other is 1
            Further-Cases---> Case 1-->No prev carry---> return 0, no prev carry generated
                              Case 2--> prev Carry---> return 1, prev carry generated

Case_3---> Both digits are 1
            Further_cases---> Case 1---> No prev carry-->return 0, generate prev carry
                              Case 2---> Prev carry-->return 1, prev carry generated                              
Case 4---> if a is present but b is finished
Case 5---> if b is present but a is finished
Case 6---> If both are finished but carry is present
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int lastDigit;
    int ans = 0;
    while(n>0){
        lastDigit = n%10;
        ans = ans*10 + lastDigit;
        n=n/10;
    }
    return ans;
}

int AddBinary(int a, int b){
    int prevCarry=0;
    int ans=0;
    while(a>0 && b>0){

    if(a%2==0 && b&2==0){
        if(prevCarry==1){
            ans = ans*10 + 1;
            prevCarry = 0;
        }
        else if(prevCarry==0){
            ans = ans *10 + 0;
            prevCarry = 0;
        }
    }
    else if(a%2==1 && b%2==0 || a%2==0 && b%2==1){
        if(prevCarry ==1){
            ans = ans*10 + 0;
            prevCarry = 1;
        }
        else if(prevCarry==0){
            ans = ans*10 + 1;
            prevCarry = 0;
        }
    }
    else if(a%2==1 && b%2==1){
        if(prevCarry==1){
            ans = ans*10 + 1;
            prevCarry = 1;
        }
        else if(prevCarry==0){
            ans = ans*10 + 0;
            prevCarry = 1;
        }
    }
    a = a/10;
    b = b/10;
    }
    // If a is still present and b is finished
    while(a>0){
        if(prevCarry==1){
            if(a%2==1){
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else if(prevCarry=0){
            ans = ans*10 + (a%2);
        }
        a= a/10;
    }
    // If b is still present and a is finished
    while(b>0){
        if(prevCarry==1){
            if(b%2==1){
                ans = ans*10 + 0;
                prevCarry = 1;
            }
            else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else if(prevCarry=0){
            ans = ans*10 + (b%2);
        }
        b= b/10;
    }
    // If prev carry is present at last
    if(prevCarry==1){
        ans = ans*10 + 1;
    }
    ans= reverse(ans);
    return ans;
}

int main(){
    int a, b;
    cout<<"Enter first numbers:"<<endl;
    cin>>a;
    cout<<"Enter second numbers:"<<endl;
    cin>>b;

    cout<<AddBinary(a, b)<<endl;;
    return 0;
}