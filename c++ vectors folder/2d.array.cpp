#include<iostream>
using namespace std;

int main(){
    int row,cols;

    cout << "Enter rows : ";
    cin >> row;
 
    cout << "Enter cols : ";
    cin >> cols;

    int* *matrix = new int*[row];  //it makes the matrix as a integer pointer

    for(int i = 0 ;i < row ; i++){
       matrix[i] = new int[cols];
    }
    

    //data store
    int x = 1;
    for(int  i = 0 ; i <row ; i++){
        for(int j = 0 ; j< cols ; j++){
        matrix[i][j] = x++;
        cout << matrix[i][j] <<" ";
    }
    cout << endl;
}

cout << matrix[2][2] << endl;
cout << *(*(matrix+2) + 2) << endl;
    return 0;
}