#include<iostream>
using namespace std;

int main(){
    
    ///////// QUESTION NUMBER 1
    // int array[2][3] ={{4,7,8},
    //                    {8,8,7}};
                       
    // int n = 2,m = 3;                   

    // int countOf7 = 0;

    // for(int i=0;i < n ; i++){
    //     for(int j = 0 ; j < m ; j++){
    //         if(array[i][j] == 7){
    //             countOf7++;
    //         }
    //     }
    // }    

    // cout << "count of 7 is : " << countOf7 << endl;  

    // QUESTION 2   

    /////// int num[][3] = {{1,4,9},{11,4,3},{2,2,3}};

    // int n = 3,m=3;
    // int sum = 0;

    // // sum of the second row  
    // for(int j = 0 ; j< m ; j++){
    //     sum += num[1][j];
    // }         

    // cout << "sum is : " << sum << endl;

    /////// QUESTION 3

    int row = 2,column = 3;
    int matrix[][column] = {{2,3,7},
                            {5,6,7}};

    int transpose[column][row] = {{0}};

    for(int i = 0; i< row ; i++){
        for(int j = 0 ; j< column ;j++){
            transpose[j][i] = matrix[i][j];
        }
    }

    //Print the transpose

    for(int i = 0 ; i<column ; i++){
        for(int j = 0 ; j< row ; j++){
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}