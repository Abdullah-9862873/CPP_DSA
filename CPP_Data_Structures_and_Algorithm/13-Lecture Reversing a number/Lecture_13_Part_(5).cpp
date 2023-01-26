// Find that the character is vowel or consonant

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter any character: "<<endl;
    cin>>ch;

    int IsLowerCaseVowel;    
    int IsUpperCaseVowel;    
    IsLowerCaseVowel = (ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u');
    IsUpperCaseVowel = (ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U');

    if(IsLowerCaseVowel || IsUpperCaseVowel){
        cout<<"It is a vowel"<<endl;
    }
    else{
        cout<<"It is a consonant"<<endl;
    }
    return 0;
}