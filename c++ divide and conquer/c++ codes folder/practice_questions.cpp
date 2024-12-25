#include<iostream>
#include<cmath>
using namespace std;


// void multiplyBy2(int &a ,int &b ,int &c){
//     a *= 2;
//     b *= 2;
//     c *= 2;

// }
int main(){

    //1.....

/*
PRINT THE TWO LARGEST NUMBERS
*/

// int num1,num2;

// cout <<"Enter the value of the 1st number :\n";
// cin >> num1;

// cout <<"Enter the value of the 2nd number :\n";
// cin >> num2;

// if(num1>num2){
//     cout << "Number 1st is greater thean the number 2nd :" << num1 << endl;
// }

// else{
//     cout << "Number 2nd is greater than the number 1st :" << num2 << endl;
// }

//2.....
/*
PRINT IF A NUMBER IS ODD OR EVEN
*/

// int n;
// cout << "Entet the value of number n : ";
// cin >> n;

// if(n%2 == 0){
//     cout << "EVEN  " << endl;
// }
// else{
//     cout << "ODD  "  << endl;
// }


//3.....
/*
INCOME TAX CALCULATOR
*/

// int income;
// float tax;
// cout << "Enter your income(in Lakhs) : ";
// cin >> income;

// if( income < 5){
//  tax = 0;    //for 0 percent
// }

// else if(income <= 10){
//  tax = 0.2 * income; // for 20 percent 
// }

// else{
//  tax = 0.3 * income;  //for 30 percent 
// }

// cout << "Tax = " << (tax) * 100000 << endl;

 //4.....

/*
PRINT THE LARGEST OF 3  NUMBERS
*/

// int a,b,c;
// cout << "Enter the value of a : ";
// cin >> a;

// cout << "Enter the value of b : ";
// cin >> b;

// cout << "Enter the value of c : ";
// cin >> c;

// if(a >= b && a>=c){
//     cout << "a is greater than b and c : " << a << endl;
// }

// else if( b >=a && b >= c){
//     cout << "b is greater than a and c : " << b << endl;
// }

// else{
//     cout << "c is greate than a and b : " << c << endl;
// }


/*
:::CALCULATOR BY USING SWITCH CASE :::
*/

// int a,b;
// char opr;  //can't use operator because operatoe is a reserved keyword
// cout << " Enter the value of a :";
// cin >> a;

// cout << "Enter the value of the operator(+,-,*./) : ";
// cin >> opr;

// cout << "Enter the value of b : ";
// cin >> b;

// switch(opr){

//     case '+' : cout << "Addition  of a and b = " << a + b << endl;
//     break;

//     case '-' : cout << "Subtraction of a and b = " << a - b << endl;
//     break;

//     case '*' : cout << "Multiplication of a and  b = " << a * b << endl;
//     break;

//     case '/' : cout << "Division of a and b = " << a / b << endl ;
//     break;

//     default : cout << "Not a valid operator , plese try again by entering a valid operator";
// }

// BY USING A IF , ELSE-IF AND ELSE STATEMENT

// int a,b;
// char op;

// cout << " enter a :";
// cin >> a;

// cout << " enter operator (+,-*,/) : ";
// cin >> op;

// cout << " eneter b :";
// cin >> b;

// if(op == '+'){
//     cout << "a + b = " << a + b << endl;
// }
// else if(op == '-'){
// cout << " a - b = " << a - b << endl;
// }

// else if(op == '*'){
// cout << " a * b = " << a * b << endl;
// }

// else if(op == '/'){
// cout << " a / b = " << a / b << endl;
// }

// else{
//     cout << "not a valid operator !!!";
// }


// LOOPS 

// PRINT NUMBERS FROM  1 TO N 

// int n;
// cout << " enter the value of the n : ";
// cin >> n;

// for( int i = 1 ; i <=n ; i++ ){
//     cout << i << endl;
// }
  

              // SUM OF N NATURAL NUMBER
// int n;
// int sum = 0;
// cout << "enter the value of the n : ";
// cin >> n;

// for(int i = 1 ; i<=n ; i ++ ){
//  sum+=i;
// }
//  cout << "sum = " << sum << endl;

//    PRINT NUMBERS FROM N TO 1 USING FOR LOOP

// int n ;
// cout << " enter the value of the n : ";
// cin >> n;

// for(int i = n ; i>= 1 ; i--){
//     cout << i << endl;
// }

//     PRINT THE SUM OF THR GIVEN NUMBER N = 10829

// int n;
// cout << "enter the value of n : ";
// cin >> n;

// int digSum = 0;

//  while( n> 0){
//     int lastDig = n % 10;
//     digSum += lastDig;

//     cout << lastDig << " ";

//     n =n / 10;
//  }

// cout << endl;
// cout << " sum = " << digSum<< endl;


// PRINT THE SUM OF THE ODD NO IN  A GIVEN  NUMBER

// int n = 10829;
// int sumlstd=0;

// while(n > 0){
//   int  lastdg = n %10;
//     if (lastdg % 2 != 0){
//         sumlstd+=lastdg;
//     }
//     n =n / 10;
// }

// cout << endl;
// cout << "the sum of the odd numbers = " << sumlstd << endl;


// PRINT A GIVEN NUMBER IN A REVERSE ORDER

// int n =10829;
// int result = 0;

// while(n > 0){
//     int lastdigit = n % 10;

//     // cout << lastdigit << " ";
//     result = result * 10 + lastdigit;
    
//     n =n / 10;

// }

// cout << endl;
// cout <<" reversed = " << result << endl ;

//   CONTINUE STATEMENT 

//  int n;
 
//  do{
//     cout << "enter n = ";
//     cin >> n;

//     if(n % 10 == 0) {
//         continue;
//     }
//     cout << "your number = " << n <<  endl;
//  }while(true);



/*

VERY IMPORTANT QUESTIION ****
CHECK IF NUMBER IS PRIME OR NOT 

*/

// int n;

// cout << "enter your number : ";
// cin >> n;

// bool isprime = true;

// for(int i = 2 ; i <n - 1 ; i++){
//     if(n % i == 0){ // i is a factor of n ; i completely divides n ; n is non - prime or composite number
//        isprime = false;
//        break;
//     }
// }

// if(isprime){
//     cout << "number is a prime" << endl;
// }

// else {
//     cout<< " number is NOT prime" << endl;
// }



/// second method 

// int n;

// cout << "enter the value of the n : ";
// cin >> n;

// bool isprime = true;

// for(int i = 2 ; i <= sqrt(n) ; i++){
//    if(n % i == 0){
//       isprime = false;
//    }
// }

// if(isprime){
//     cout << "number is prime" << endl;
// }

// else{
//     cout << "number is NOT a prime number" << endl;
// }
  


//                             POINTERS

//1....
// What will be the output?

// int x = 5 ,y = 10;
// int *ptr1 = &x, *ptr2 = &y;
// ptr2 = ptr1;

// cout << ptr2 << "\n";
// cout << ptr1 << "\n";
// cout << &x << "\n";

//2....

// int x = 1 , y = 2 , z = 3;
// multiplyBy2(x,y,z);
// cout << x << y << z << endl;

//3........

// int a =32;
// int *ptr = &a;

// char ch = 'A';
// char &cho = ch;

// cho += a;
// *ptr +=ch;

// cout << a << ", " << ch << endl;
int a = 'A';

cout << a << endl;


    return 0;
}