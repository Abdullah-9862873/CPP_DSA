#include<iostream>
using namespace std;

#define n 100

class stack{
    public:
    int *arr;
    int top;

        stack(){
            arr = new int [n];
            top = -1;
        }

        void push(int a){
            if(top==n-1){
                cout<<"Stack overflow"<<endl;
                return;
            }

            top++;
            arr[top] = a;
        }

        void pop(){
            if(top==-1){
                cout<<"Stack is already empty"<<endl;
                return;
            }
            else{
                top--;
            }
        }

        int TOP(){
            if(top==-1){
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            return arr[top];
        }
        bool empty(){
            return top==-1;
        }
};

void printStack(stack s){
    while(! s.empty()){
        cout<<s.TOP()<<endl;
        s.pop();
    }
    cout<<endl;
}



int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    
    cout<<st.TOP()<<endl;
    st.pop();
    cout<<st.TOP()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;

    st.push(11);
    st.push(12);
    st.push(13);
    st.push(14);
    printStack(st);




    return 0;
}