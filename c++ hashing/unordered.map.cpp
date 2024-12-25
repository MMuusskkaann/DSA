#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    //key, value
   unordered_map<string, int> m;

   m["china"] = 150;
   m["India"] = 150;
   m["US"] = 50;
   m["Nepal"] = 10;

//    cout<< m["India"] << endl;

   for(pair<string,int> country : m){
    cout<< country.first<<","<<country.second<<endl;
   }

   // count -> (key not exists) and 1 -> (key exists)

   m.erase("Nepal"); //key always unique 

   if(m.count("Nepal")){
    cout << "Nepal exists \n";
   }
   else{
    cout << "Nepal does not exists\n";
   }

   if(m.count("Canada")){
    cout << "Canada exists \n";
   }
   else{
    cout << "Canada does not exists\n";
   }

    return 0;
}