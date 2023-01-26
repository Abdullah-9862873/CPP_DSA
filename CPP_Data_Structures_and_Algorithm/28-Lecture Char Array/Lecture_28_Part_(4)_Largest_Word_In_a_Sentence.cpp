#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size: "<<endl;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cout<<"Enter the sentence: "<<endl;
    cin.getline(arr, n);
    cin.ignore(); // To clear the input buffer

    int currlen=0;
    int maxlen=0;
    int i=0;
    int maxstart =0;
    while(1){
        if(arr[i] == ' ' || arr[i] == '\0'){
            if(currlen > maxlen){
                maxlen = currlen;
                maxstart = i-maxlen;
            }
            currlen = 0;
        }
        else{
            currlen++;
        }
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }

    cout<<"The maximum length in this sentence is: "<<maxlen<<endl;
    cout<<"The word with max length is: "<<endl;
    for(int i=0; i<=maxlen-1; i++){
        cout<<arr[i+maxstart];
    }

    return 0;
}