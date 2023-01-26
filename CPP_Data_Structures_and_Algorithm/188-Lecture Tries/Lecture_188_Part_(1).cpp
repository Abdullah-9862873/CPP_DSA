#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Trie{
    public:
        class node{
            public:
                bool end;
                node* next[26];
                node(){
                    end = false;
                    for(int i=0; i<26; i++){
                        next[i] = NULL;
                    }
                }
        };

        node* trie;
        Trie(){
            trie = new node();
        }

        // Insert Function
        void insert(string word){
            int i=0;
            node* it = trie;
            while(i < word.size()){
                if(it->next[word[i] - 'a'] == NULL){
                    // Value does not exist so we create
                    it->next[word[i] - 'a'] = new node();
                }
                it = it->next[word[i] - 'a'];
                i++;
            }
            it->end = true;
        }

        bool search(string word){
            int i = 0;
            node* it = trie;
            while(i<word.size()){
                if(it->next[word[i] - 'a'] == NULL){
                    return false;
                }
                it = it->next[word[i] - 'a'];
                i++; 
            }
            return it->end;
        }
};

int main(){
    Trie *myTrie = new Trie();
    vector<string> word = {"Abdullah", "Ahmed"};
    for(auto w: word){
        myTrie->insert(w);
    }

    if(myTrie->search("Haris")){
        cout<<"Haris found"<<endl;
    }else{
        cout<<"Haris not found"<<endl;
    }

    if(myTrie->search("Abdullah")){
        cout<<"Abdullah found"<<endl;
    }else{
        cout<<"Abdullah not found"<<endl;
    }

    return 0;
}