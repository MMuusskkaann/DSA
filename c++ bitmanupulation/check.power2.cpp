#include<iostream>
using namespace std;

bool isPower2(int num){
 
  if(!(num & (num-1))){
    return true;
  }
  else{
    false;
  }
}

int main(){

    cout << isPower2(4) << endl;
    cout << isPower2(16) << endl; 
    cout << isPower2(13) << endl;
    cout << isPower2(7) << endl;           
    return 0;

}