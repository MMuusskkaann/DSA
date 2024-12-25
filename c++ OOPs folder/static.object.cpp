#include<iostream>
using namespace std;

class Example {
    public:
      Example(){
        cout << "Contructor...\n";
      }

      ~Example(){
        cout << "Destructor...\n";
      }
};
int main(){
    int a = 0;
    if(a==0){
        Example eg1;
    }

    cout << "Code Ending....\n";
    return 0;
}