#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Heap{
    vector<int> vec;
public:
   
   void push(int val){
    //step1
    vec.push_back(val);

    //fix heap
    int x = vec.size()-1;  //child value
    int parI = (x-1)/2;  // parent value
    
    //ager min print kerane ho toh condition reverse ker doh vex[x]<vec[parI]
    while(parI >= 0 && vec[x] > vec[parI]){  //TC-> O(logn)
        swap(vec[x],vec[parI]);

        x = parI;
        parI = (x-1)/2;
   }
   }

   void pop(){

   }

   int top(){
    return vec[0]; //highest priority element

   } 

   bool empty(){
    return vec.size() == 0;
   }
};
int main(){
    Heap heap;
    heap.push(50);
    heap.push(10);
    heap.push(100);

    cout << "Heap top = " << heap.top() << endl;

    return 0;
}