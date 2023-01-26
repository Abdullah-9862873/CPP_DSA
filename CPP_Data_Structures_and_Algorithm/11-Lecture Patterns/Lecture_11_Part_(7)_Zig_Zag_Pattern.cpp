/*
1     *      *    
2   *  *   *  *   
3 *      *      *
  1 2 3 4 5 6 7 8 9
Row---> Wrtie the indexes and look row are fixed from (1 to 3)
Col ---> if (row+col)%4==0 then star and this way only two stars are not printed
            one at the index 2,4 and other at 2,6
            so we can solve this by writing if at row=2, col%4==0 then star
        Else space
*/


#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    for(int i=1; i<=3; i++){
        for(int j=1; j<=num; j++){
            if((i+j)%4==0){
                cout<<"*";
            }
            else if(i==2 && j%4==0){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}