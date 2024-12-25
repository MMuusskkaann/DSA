#include<iostream>
#include<string>
using namespace std;

bool areAlmostEqual(string s1, string s2) {
        if (s1==s2)return true;
        int st=0; int en=s1.size()-1;
        while (s2[st]==s1[st])st++;
        while (s2[en]==s1[en])en--;
        swap(s2[st],s2[en]);
        return s1==s2;
    }

int main(){

    string s1 = "bank";
    string s2 = "kanb";

    areAlmostEqual(s1,s2);
    return 0;
}