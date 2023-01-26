#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s1 = "wrangler";
    cout<<"Initial value of s1 is: "<<s1<<endl;

    //Convert to upper case

    //  cout<< 'a' - 'A' = 32;

    for(int i=0; i<=s1.size(); i++){
        if(s1[i] >= 'a' && s1[i] <= 'z'){
            s1[i] = s1[i] - 32;
        }
    }
    cout<<"Value of string after converting to UpperCase is: "<<endl;
    cout<<s1<<endl;

    // Convert to LowerCase
    
    for(int i=0; i<=s1.size(); i++){
        if(s1[i] >= 'A' && s1[i] <= 'Z'){
            s1[i] = s1[i] + 32;
        }
    }
    cout<<"Value of string after converting to LowerCase is: "<<endl;
    cout<<s1<<endl;
    return 0;
}