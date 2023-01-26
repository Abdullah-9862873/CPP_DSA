/*
Catalan Numbers---> Catalan numbers are the sequence of natural numbers that occur
                    in various couning problems, often involving recursively 
                    defined objects(object of -->
                    BST ,BT, Forests, Triangulation problem)

Their form in terms of binomial coefficients is:

C(base n) = 1 * ((power--> 2n)C(Base n)) / (n+1) 
                = Summation of C(Base i)C(Base n-i)

                i varies from (0 to n-1)
                

Values---->
            C(Base 0) ---> 1
            C(Base 1) ---> 1
            C(Base 2) ---> C(Base 0)C(Base 1) + C(Base 1)C(Base 0) = 2
            C(Base 3) ---> C(Base 0)C(Base 2) + C(Base 1)C(Base 1) + C(Base 2)C(Base 0)
                            = 5
We can make the time complexity of this code optimal using Dynamic Programming    
*/

#include<iostream>
using namespace std;

int catalan(int n){
    if(n <= 1){
        // Catalan of 1 and 0 are 1
        return 1;
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += catalan(i) * catalan(n-i-1);
    }
    return sum;
}

int main(){
    // Print first ten catalan series
    for(int i=0; i<10; i++){
        cout<<catalan(i)<<" ";
    }
    cout<<endl;

    return 0;
}
