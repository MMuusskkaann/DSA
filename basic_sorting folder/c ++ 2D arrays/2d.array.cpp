#include<iostream>
using namespace std;

int main(){

    // int student[3][3] = {{100,100,100},
    //                      {98,87,88},
    //                      {99,76,78}};

    // cout << student[1][1]<<endl;     

    int array[3][4];
    int n = 3,m = 4;

    for(int i = 0 ; i< n ; i++){     // for rows
        for(int j = 0 ; j < m ; j++){ // for columns
            cin >> array[i][j];
        }
    }            


      for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j < m ; j++){
            // cout << array[i][j] << " ";
        }
        cout << endl;
      }    
    return 0;
}