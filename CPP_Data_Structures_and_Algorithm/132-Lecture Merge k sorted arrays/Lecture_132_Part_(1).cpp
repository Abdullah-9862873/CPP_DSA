#include<iostream>
#include<bits/stdc++.h>
// using namespace std;

class data{
    public:
        int val;
        int arraypos;
        int valpos;

        data(int v, int apos, int vpos){
            val = v;
            arraypos = apos;
            valpos = vpos;
        }
};

// To ensure min heap
struct mycomparator{
    bool operator()(data &d1, data & d2){
        return d1.val > d2.val;
    }
};

int main(){
    int k;
    std::cout<<"Enter the no of arrays: "<<std::endl;
    std::cin>>k;

    // 2d vector of integer type
    std::vector<std::vector<int>> arr(k);

    for(int i=0; i<k; i++){
        int size;
        std::cout<<"Enter the size of array "<<std::endl;
        std::cin>>size;

        arr[i] = std::vector<int>(size);


        for(int j=0; j<size; j++){
            std::cin>>arr[i][j];
        }
    }

    std::vector<int> ans;
    std::priority_queue<data, std::vector<data>, mycomparator> pq;
    for(int i=0; i<k; i++){
        // Take first element of each array
        data d(arr[i][0], i, 0);
        pq.push(d);
    }

    while(!pq.empty()){
        data curr = pq.top();
        pq.pop();

        ans.push_back(curr.val);
        int arrayposition = curr.arraypos;
        int valueposition = curr.valpos;

        if(valueposition+1 < arr[arrayposition].size()){
            data d(arr[arrayposition][valueposition+1], arrayposition, valueposition+1);
            pq.push(d);
        }
    }
    for(int i=0; i<ans.size(); i++){
        std::cout<<ans[i]<<" ";
    }

    return 0;
}

/*
Input
    k = 3;
    size = 3---> Elements---> 1 2 3
    size = 3---> Elements---> 4 5 6
    size = 3---> Elements---> 7 8 9

Output
    1 2 3 4 5 6 7 8 9
*/