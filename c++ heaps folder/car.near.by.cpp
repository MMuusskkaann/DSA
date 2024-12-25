#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Car{
public:
    int idx;
    int distSq;

    Car(int idx,int distsq){
        this->idx = idx;
        this->distSq = distsq;
    }

    //operator overloading
    bool operator< (const Car &obj) const {
        return this->distSq > obj.distSq; //minheap(>) and maxheap(<)
           //yha per arrow      yha arrow nhi 
           //lagainge because  lagega because 
           //this is pointer(*)  this is object
    }
};

void nearbycars(vector<pair<int,int>> pos,int k){
    //index store,distane square  of each car from origin
    vector<Car> cars;

    for(int i = 0 ; i<pos.size();i++){ //O(n)
        int distSq = (pos[i].first * pos[i].first) + (pos[i].second * pos[i].second);
        cars.push_back(Car(i,distSq));
    }

    //priority queue

    priority_queue<Car> pq(cars.begin(),cars.end()); //O(n) reduces time complexity
     

     //iss loop ko use nhi kerenge ager use kerenge toh time complexity jaida lagage 
    //(
    // for(int i = 0 ; i<cars.size(); i++){  //O(nlogn)
    //     pq.push(cars[i]);
    // )

    for(int i = 0 ; i<k ;i++){ //O(k*logn + n)
        cout<< "car : "<< pq.top().idx << endl;
        pq.pop(); //O(logn)
    }
}
int main(){

    vector<pair<int,int>> pos;

    pos.push_back(make_pair(3,3));
    pos.push_back(make_pair(5,-1));
    pos.push_back(make_pair(-2,4));

    int k =2;
    nearbycars(pos,k);
    return 0;
}