#include <iostream>
using namespace std;

int main()
{
    // Print numbers from
    // 1 to 100 but don't print the numbers that are divisible by 3

    for(int i=1; i<=100; i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}