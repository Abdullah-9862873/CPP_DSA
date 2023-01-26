#include<iostream>
using namespace std;

int main(){
    int kids;
    cout<<"Enter the numebr of kids: "<<endl;
    cin>>kids;

    int candies;
    cout<<"Enter the number of candies: "<<endl;
    cin>>candies;

    int kids_arr[kids];
    int candies_arr[candies];

    for(int i=0; i<kids; i++){
        cout<<"Enter the number of candies you want to give to kid "<<i+1<<": "<<endl;
        cin>>candies_arr[i];
    }

    // Candies_arr[0] has the candies given to kid 0
    int min_candy = INT_MAX;
    int min_index = 0;

    int max_Candy = INT_MIN;
    int max_index = 0;

    for(int i=0; i<kids; i++){
        if(candies_arr[i] >max_Candy){
            max_Candy = candies_arr[i];
            max_index = i;
        }
        if(candies_arr[i] < min_candy){
            min_candy = candies_arr[i];
            min_index = i; 
        }
    }

    cout<<"The maximum number of candies are: "<<max_Candy<<endl;
    cout<<"The minimum numeber of candies are: "<<min_candy<<endl;
    cout<<"The kid with maximum candies is: "<<(max_index)+1<<endl;
    cout<<"The kid with minimum number of candies is: "<<(min_index)+1<<endl;


    return 0;
}