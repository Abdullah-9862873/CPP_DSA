#include<iostream>
using namespace std;

int main(){
    int savings;
    cout<<"What are your savings? "<<endl;
    cin>>savings;

    if(savings>5000){
        if(savings>=10000){
            cout<<"You should go on a road trip with Neha"<<endl;
        }else if(savings>5000 && savings < 10000){
            cout<<"You should go for shopping with Neha"<<endl;
        }
    }else if(savings>2000){
        cout<<"You should go with Rashmi "<<endl;
    }else if(savings<2000){
        cout<<"You should go with friends "<<endl;
    }

    return 0;
}