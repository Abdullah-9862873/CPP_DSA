#include<iostream>
using namespace std;

int main(){
    int IsLowerCaseVowel, IsUpperCaseVowel;
    char c;
    cout<<"Enter the alphabet: "<<endl;
    cin>>c;

   IsLowerCaseVowel = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
   IsUpperCaseVowel = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');

   if(IsLowerCaseVowel || IsUpperCaseVowel){
    cout<<"It is a vowel"<<endl;
   }
   else{
    cout<<"It is a consonant"<<endl;
   }
    return 0;
}