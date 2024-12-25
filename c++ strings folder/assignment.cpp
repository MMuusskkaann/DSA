#include<iostream>
#include<string>
using namespace std;

int getVowelCount(string str){
    int count = 0;

    for(int i = 0 ; i<str.length() ; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i'||
            str[i] == 'o' || str[i] == 'u' ){
                count++;
            }       
    }
    cout << "vowels is present in the string : " << count <<  endl;
    return count;
}

int main(){
    string str = "thgvf";

    getVowelCount(str);
    return 0;
}

