#include<iostream>
#include<string>
using namespace std;

int main(){
    //Erase Function---> string.erase(index, elements to erase);
    string st = "nincompoop";
    cout<<"The string before erasing is: "<<st<<endl;
    st.erase(3, 3);
    cout<<st<<endl;

    // Find function--> Return index of the first element of input
    cout<<st.find("poo")<<endl;

    //Insert function
    cout<<st.insert(2, "lol")<<endl;

    // Size Function
    cout<<st.size()<<endl;
    cout<<st.length()<<endl;

    // Iterate to each element
    for(int i=0; i<=st.size(); i++){
        cout<<st[i]<<endl;
    }
    
    return 0;
}