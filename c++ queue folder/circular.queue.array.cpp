#include<iostream>
using namespace std;

class Queue{
  int* array;

  int capacity;
  int currSize;

  int f,r;  //f->front , r->rear

public:
  Queue(int capacity){
    this->capacity = capacity;
    array = new int(capacity);
    currSize =0;
    f = 0;
    r = -1;
  }

  void push(int data){ //O(1)
    if(currSize == capacity){
        cout<<"Queue is FULL...."<<endl;
        return;
    }
    r = (r+1) % capacity;
    array[r] = data;
    currSize++;
  }

  void pop(){ //O(1)
    if(empty()){
        cout<<"Queue is EMPTY...."<<endl;
        return;
    }
    f = (f+1) % capacity;
    currSize--;
  }

  int front(){ //O(1)
    if(empty()){
        cout<<"Queue is EMPTY...."<<endl;
        return -1;
    }
    return array[f];
  }

  bool empty(){
    return currSize == 0;

  }

  void printrear(){
    cout<<array[r]<<endl;
  }
};

int main(){

    Queue q(4);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.push(6);
    cout<<q.front()<<endl;

    q.printrear();


    return 0;
}