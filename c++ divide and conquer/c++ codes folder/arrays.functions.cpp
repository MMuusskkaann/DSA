#include<iostream>
using namespace std;


// void fun(int array[]){
//     array[0] = 1000;
// }

// both gives the same value 

// void fun2(int *ptr){
//     ptr[0] = 1000;
// }

/*
IMPORTANT...**
IN FUNCTIONS :- 
               array ka name ka sath uska size bhi pass karana important ha 
               because functions ya nhi kar sakta uska size pass nhi kar sakta
               or agar size pass nhi karvainga toh it take as a pointer

*/
void printArray(int nums[],int n){

//    cout << sizeof(nums) << endl;  
    // int n= sizeof(nums)/sizeof(int); // wrong can't use shows error

    for(int i = 0 ; i<n ; i++){
        cout << nums[i] << " , ";
    }
    cout << endl;
}


int main(){
   
//    int a = 5;
//    int *ptr = &a;
//    cout << ptr << endl;

   int array[] = {1,2,3,4,5};
   int n = sizeof(array)/sizeof(int);

   cout << "array size = " << sizeof(array) << endl;
   printArray(array,n);

//    fun(array); // passing array name is equivalent to passing the pointer
//    cout << array[0] << endl;

//    fun2(array);
//    cout << array[0] << endl;

    return 0;
}