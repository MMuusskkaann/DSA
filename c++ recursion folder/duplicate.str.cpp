#include<iostream>
#include<string>
#include<cstring>
using namespace std;

void removeDuplicate(string str, string ans, int i , int map[26]){
if(i == str.size()){
    cout  << "ans : " << ans << endl;
}
   char ch = str[i];  //duplicate
   int mapidx = (int)(ch-'a');
   if(map[mapidx] == true ){
      removeDuplicate(str,ans,i+1,map);
   }

   else{ // not duplicate
    map[mapidx] = true;
    removeDuplicate(str,ans+str[i],i+1,map);
   }
} 
int main(){

    string str = "appnnacollege";
    string ans = "";
    int map[26] = {false};

    removeDuplicate(str,ans,0,map);
    return 0;
}