#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
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


//heapify function

void heapify(int i){ // i -> parent index

   if(i >= vec.size()){ // base case->ager vector kbhi empty ho jai
    return;
   }


    int left = 2*i+1;
    int right = 2*i+2;

    int maxIdx = i;
    if(left < vec.size() && vec[left] > vec[maxIdx]){
        maxIdx = left;
    }

  if(right< vec.size() && vec[right] > vec[maxIdx]){
    maxIdx = right;
  }

  swap(vec[i],vec[maxIdx]);

  if(maxIdx != i){  // swapping hue hei but kise child kei sath
      heapify(maxIdx);
  }
}
   void pop(){
    //step->1
    swap(vec[0],vec[vec.size()-1]);

    // step ->2
    vec.pop_back();
     
    //step->3 heapify fun -> TC->O(logn)
    heapify(0);

   }

   int top(){

    return vec[0];

   }
   bool empty(){
    return vec.size()==0;
   }
};

int main(){

    Heap heap;

    heap.push(9);
    heap.push(4);
    heap.push(8);
    heap.push(1);
    heap.push(2);
    heap.push(5);

    // cout<<"Top  of the Heap = "<< heap.top()<<endl; //100

    // heap.pop();
    // cout<<"Top of the Heap = "<<heap.top()<<endl; //50

    while(!heap.empty()){
        cout<<"Top : " << heap.top()<<endl;
        heap.pop();
    }
    return 0;
}