#include<iostream>
using namespace std;

    bool search(int matrix[][4],int n,int m , int key){
        int i = 0 , j = m-1;
        while(i<n && j>= 0){
            if(matrix[i][j]  == key){
                cout << "found at cell (" << i << "," << j << ")";
                return true;
            }
            else if(matrix[i][j] > key){
                //left
                j--;
            }
            else{
                //down
                i++;
            }
        } 

        cout << "key not found \n";
        return false;
    }

    int main(){

    int matrix[4][4] = {{10,20,30,40},
                        {15,25,35,45},
                        {27,29,37,48},
                        {32,33,39,50}};

    search(matrix,4,4,500);              
    return 0;
} 