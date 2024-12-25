#include<iostream>
#include<cstring>
using namespace std;

void toUpper(char word[],int n){
   for(int i = 0 ;i < n ; i++){
      char ch = word[i];
      if(ch >= 'A' && ch <= 'Z' ){
        continue;
      }
      else{
        word[i]=ch - 'a' + 'A';
      }
   }
}

// void tolower(char word[],int n){
//    for(int i = 0 ;i < n ; i++){
//       char ch = word[i];
//       if(ch >= 'A' && ch <= 'Z' ){
//         continue;
//       }
//       else{
//         ch = word[i] + 32;
//       }
//    }
// }

int main(){
    // char word[30];

    // cin >> word;  // ignore whitespace

    // cout << " your word was : " << word << endl;
    // cout << "length : " << strlen(word) << endl;


    // char sentence[30];
    // cin.getline(sentence,30,'*');

    // cout << "Your sentence was : " << sentence << endl;
    // cout << "length : " << strlen(sentence) << endl;

    char word[] = "abchftr";
    toUpper(word,strlen(word));

    cout << word <<endl;
    return 0;
}
