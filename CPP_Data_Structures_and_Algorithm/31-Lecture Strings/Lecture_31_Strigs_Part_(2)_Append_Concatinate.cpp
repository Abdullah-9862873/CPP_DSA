#include<iostream>
#include<string>
using namespace std;

int main(){
    // Append
    string st1 = "fam";
    string st2 = "ily";
    string st3;

    st3 = st1 + st2;
    cout<<st3<<endl;
    cout<<st1 + st2<<endl;
    cout<<st1.append(st2)<<endl;

    cout<<st3[2]<<endl;

    //Clear function in String
    cout<<">>>>>>Clear Function<<<<<<<"<<endl;
    string abc;
    abc = "andsafsd asdf as ads f";
    cout<<abc<<endl;
    abc.clear();
    cout<<abc<<endl;

    // Assigning same value to each index in the string
    cout<<">>>>>>>Assigning index and same value at each index<<<<<<"<<endl;
    string str(5, 'n');
    cout<<str<<endl;
    return 0;
}