
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void bfs(int position, int len , string ans , string &digits , vector<vector<char>> &L){
    if(position == len){
        cout<< ans <<endl;
    }
    else{

        vector<char> letters = L[digits[position]-'0'];
        for(int i = 0 ; i< letters.size() ; i++){
            bfs(position+1 , len , ans + letters[i] , digits , L);

        } 
    }
}

void lettercombination(string digits,vector<vector<char>> &L){
    int len = digits.size();
    if(len == 0){
        cout << "";
        return;
    }

   string ans = "";
  bfs(0,len,ans,digits,L);
}

int main(){

    vector<vector<char>> L = {{},{},{'a','b','c'},{'d','e','f'},
                               {'g','h','i'},{'j','k','l'},{'m','n','o'},
                               {'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};

    string digits = "23";

    lettercombination(digits,L);
    return 0;
}