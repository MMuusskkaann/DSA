#include<iostream>
#include<vector>
#include<string>
#include<queue>
using namespace std;

class Heap{
    vector<int> vec;

public:
 void push(int val){
    vec.push_back(val);

    int x = vec.size()-1;  
    int parI = (x-1)/2;  

    while(parI >= 0 && vec[x] > vec[parI]){
        swap(vec[x],vec[parI]);

        x = parI;
        parI = (x-1)/2;
   }
 }

 void heapify(int i){
    if(i >= vec.size()){
        return;
    }

    int left = 2 * i + 1;
    int right = 2 * i + 2;

    int maxIdx = i;
    if(left < vec.size() && vec[left] > vec[maxIdx]){
        maxIdx = left;
    }

    if(right < vec.size() && vec[right] > vec[maxIdx]){
        maxIdx = right;
    }

    swap(vec[i],vec[maxIdx]);

    if(maxIdx != i){
        heapify(maxIdx);
    }
 }

 void pop(){
    swap(vec[0],vec[vec.size()-1]);
    vec.pop_back();
    heapify(0);
 }

 int top(){
    return vec[0];
 }

 bool empty(){
    return vec.size() == 0;
 }
};

// class Student {
// public:
//     string name;
//     int marks;

//     Student(string name, int marks){
//         this->name = name;
//         this->marks = marks;
//     }

//     bool operator <(const Student &obj) const {
//         return this->name < obj.name;  // on the basis of name  < ->shows the which type of hesp is built
//     }                                // ager < yei sigh hei toh default heap bulild hoga joke max heap hota hei
// };

struct ComparePair{
    bool operator () (pair<string,int> &p1, pair<string,int> &p2){
        return p1.second > p2.second;
    }
};
int main(){

    // priority_queue<Student> pq;
    // pq.push(Student("aman", 50));
    // pq.push(Student("bhumika", 70));
    // pq.push(Student("kritika", 89));


    //  while(!pq.empty()){
    //     cout << "Top : " << pq.top().name << "," << pq.top().marks << endl;
    //     pq.pop();
    // }

    //for making pairs
    priority_queue<pair<string,int>, vector<pair<string,int>>, ComparePair> pq;

    pq.push(make_pair("aman",500));
    pq.push(make_pair("bhumika",1000));
    pq.push(make_pair("chetan",2000));
    


    while(!pq.empty()){  // peirs mei value 1st and second maie print kerate hei
        cout << "Top : " << pq.top().first << "," << pq.top().second << endl;
        pq.pop();
    }

    return 0;
}