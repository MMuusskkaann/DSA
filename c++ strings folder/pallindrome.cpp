#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

bool isPallindrome(char word[],int n){
    int st = 0 ,end = n - 1;
    while(st < end){
        if(word[st] != word[end]){
            cout << "not valid pallindrome";
            return false;
        }
        st++;
        end--;
    }
    cout << "valid pallindrome";
    return true;

}

int main(){

    // char word[] = "racecar";
    char word[] = "maadam";

    isPallindrome(word,strlen(word));
    return 0;
}