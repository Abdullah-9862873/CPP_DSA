#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string: "<<endl;
    cin>>str;

    int freq[26];
    for(int i=0; i<=26-1; i++){
        freq[i] = 0;
    }

    for(int i=0; i<=str.size()-1; i++){
        freq[str[i] - 'a']++;
    }

    char ans = 'a';
    int maxFreq = 0;
    int anotherfreq = 0;
    for(int i=0; i<=26-1; i++){
        if(freq[i] > maxFreq){
            maxFreq = freq[i];
            ans = i+'a';
        }
    }
    cout<<"The maximum frequency of character is: "<<maxFreq<<endl;
    cout<<"Following alphabets have maximum frequency: "<<endl;
    for(int i=0; i<=26-1; i++){
        if(freq[i] == maxFreq){
            char finalans='a';
            finalans = i + 'a';
            cout<<finalans<<endl;
        }
    }


    return 0;
}