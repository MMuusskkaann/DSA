#include<iostream>
using namespace std;

//////////////////// Through class ///////////////
class Example {
public:
   static int x; // only give value and intialize here
};
int Example::x = 0; // value can be taken by the outside of the class

 
/////////// Through function //////////////
// void Counter(){
//     static int  count = 0; // jsb tak program khatam nhi hota jab tak memory ma rahta ha...
//     count++;
//     cout << "Count : " << count << endl;
// }
int main(){
    // Counter();
    // Counter();
    // Counter();

    Example eg1;
    Example eg2;
    Example eg3;

    cout << eg1.x++ << endl;  // print output = 0   
    cout << eg2.x++ << endl;  // print output = 0
    cout << eg3.x++ << endl;  // print output = 0

    return 0;
}