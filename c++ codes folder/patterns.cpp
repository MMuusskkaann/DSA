#include<iostream>
using namespace std;

int main(){

// //                              NESTED LOOPS

int n;
cout << "enter the value of the n : ";
cin >> n;
// int i;
for(int i = 1 ; i<=n ; i++){
    cout << "****" << endl;
}

cout << "------------------------------********************------------------------------";
cout << endl;

// /*square pattern 
// 1111
// 2222
// 3333
// 4444
// */

// outer loop
for (int i =  1 ; i<=n ; i++){
 // inner loop
 for(int j = 1 ;j <=n ; j++){
    cout << i << " ";
 }
 cout << endl;
}


// //                  OR ( To check the code is run properly)

// // int i;
// // for (i =  1 ; i<=4 ; i++){
// //  // inner loop
// //  for(int j = 1 ;j <=4 ; j++){
// //     cout << i << " ";
// //  }
// //  cout << endl;
// // }
// // cout << i << endl;

// cout << "------------------------------********************------------------------------";
// cout << endl;

// /*


// /*PRINT THE STAR PATTERN

// *
// **
// ***
// ****
// */

for(int i = 1 ; i <=n ; i++){
    for ( int j = 1 ; j <= i ; j++){
        cout << "*" <<" ";
    }
    cout << endl;
}

cout << "------------------------------********************------------------------------";
cout << endl;

// /*
// PRINT THE INVERTED STAR PATTERN 
// * * * *
// * * *
// * *
// *
// */

for(int i = 1 ;i <= n ; i++ ){
  for(int j = 1; j <= (n-i+1) ; j++){
    cout << "*" << " ";
  }
  cout << endl;
}

cout << "------------------------------********************------------------------------";
cout << endl;

// /*
// PRINT HALF PYRAMID PATTERN 
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// */

for(int i = 1 ; i<=n ; i++){
    for(int j = 1 ; j <= i ; j++){
        cout << j << " ";
    }
    cout << endl;
}

cout << "------------------------------********************------------------------------";
cout << endl;

// /*
// PRINT CHARACTER PYRAMID PATTERN 
// A
// BC
// DEF
// GHI
// */

char ch = 'A';
for(int i = 1 ;i <=n ; i++){
    for(int j = 1 ; j <= i ; j++){
        cout << ch << "";
        ch++;
    }
    cout << endl;

}

cout << "------------------------------********************------------------------------";
cout << endl;

// /*
// PRINT HOLLOW RECTANGLE  PATTERN 
// * * * * *
// *       *
// *       * 
// * * * * *
// */

for(int i =1 ; i<=n ; i++){
    cout <<"*";  // first star
    for(int j = 1 ; j<=n-1 ; j++){
       if(i == 1 || i == n){
        cout <<"*";
       }
       else{
        cout <<" ";
       }
    }
    cout <<"*"<<endl;  //last star
}

cout << "------------------------------********************------------------------------";
cout << endl;

// /*
// INVERTD AND ROTATED  PATTERN 
//       *
//     * *
//   * * *  
// * * * *      
// */

for(int i = 1 ; i<=n ;i++){

    //spaces
    for(int j = 1 ; j<= n-i ; j++){
            cout << " ";
        }

    // stars    
        for(int stars = 1 ; stars <= i ; stars++ ){
            cout << "*";
    }
    cout << endl;
}

cout << "------------------------------********************------------------------------";
cout << endl;

// /*
// PRINT FLOYD'S triangle
// 1
// 2 3 
// 4 5 6 
// 7 8 9 10
// 11 12 13 14 15
// */

int num =1;
for(int i = 1; i <= n ; i++){
    for(int j = 1 ; j<= i ; j++){
        cout << num++ <<" ";
    }
    cout << endl;
}

cout << "------------------------------********************------------------------------";
cout << endl;

// /*
// DIAMOND PATTERN 
//               *
//             * * *
//           * * * * *
//         * * * * * * *
//         * * * * * * * 
//           * * * * *
//             * * *
//               *
          
// */

// // FIRST PYRAMID
for(int i = 1 ; i<=n ; i++){
    // spaces
    for(int j = 1 ; j<= n-i ; j++){
        cout << " ";
    }

    // stars
    for(int j = 1 ; j <= 2*i-1; j++){
        cout << "*";
    }
    cout << endl;
}

// // SECCOND PYRAMID

for(int i = n ;i >=1 ; i--){
    for(int j = 1 ;j <= n-i ;j++){
        cout <<" ";
    }
    for(int j = 1 ;j <= 2*i-1;j++){
        cout <<"*";
    }
    cout << endl;
}

cout << "------------------------------********************------------------------------";
cout << endl;

// /*
// BUTTERFLY PATTERN 
// *      *  
// **    **
// ***  *** 
// ********
// ********
// ***  ***
// **    **
// *      *
          
// */

// //upper half

for(int i =1 ; i<=n ;i++){
    //stars
    for(int j = 1 ; j <=i ; j++){
        cout<<"*";
    }
    //spaces
    for(int j = 1 ;j<= 2*(n-i) ; j++){
        cout << " ";
    }
    for(int j = 1 ; j<= i ; j++){
        cout <<"*";
    }
    cout << endl;
}

// //lower half

for(int i = n ; i>=1;i--){
    //stars
    for(int j = 1 ; j<=i ;j++){
        cout<<"*";
    }
    //spaces
    for(int j = 1 ; j<=2*(n-i) ;j++){
        cout << " ";
    }
    //stars
    for(int j = 1 ; j <=i ; j++){
        cout<< "*";
    }
    cout << endl;
}

cout << "------------------------------********************------------------------------";
cout << endl;

/*
PRINT THE 0-1 TRIANGLE PATTERN
1
01
101
0101
10101
*/

int value = 1;
for(int i = 0 ; i<n ; i++){
    if(i%2==0){
        value = 1;
    }
    else{
        value = 0;
    }
   for(int j = 0 ; j<=i ;j++){
    cout << value<< " ";
    value = !value;
   }
   cout << "\n";
}



cout << "------------------------------********************------------------------------";
cout << endl;

/*
PRINT THE RHOMBUS PATTERN
        * * * * *
      * * * * *
    * * * * *
  * * * * *
* * * * *
*/

for(int i = 0 ; i<=n ; i++){
    for(int  j = 0 ;j <=n-i-1 ; j++){
        cout << " ";
    }
    for(int j = 0 ;j <= n ; j++){
        cout<<"*";
    }
    cout<<endl;
}

cout << "------------------------------********************------------------------------";
cout << endl;

/*
PRINT THE 0-1 TRIANGLE PATTERN
          1
        2 1 2
      3 2 1 2 3
    4 3 2 1 2 3 4
  5 4 3 2 1 2 3 4 5    
*/

for(int i = 1 ;i <= n ; i++){
    //spaces
  for(int j = 1 ; j<=n-i ; j++){
    cout << " ";
  }

  // backward
  for(int j = i ; j >= 1 ;j--){
    cout << j ;
  }

  //forward 
  for(int j = 2 ; j<=i ; j++){
    cout<<j;
  }
  cout<<endl;


}

    return 0;
}