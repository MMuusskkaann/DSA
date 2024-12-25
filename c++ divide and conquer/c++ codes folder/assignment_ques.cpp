#include<iostream>
using namespace std;


int main() {
// 1...calculate the area of the square

// int side;

// cout<<"Enter the value of the side = ";
// cin>>side;

// cout<<"Area of the square = "<<side*side<<endl;

// /*2... Enter cost of 3 items from the user(usingfloatdatatype)-apencil,apenandaneraser.
//   You have to output the totalcost of the itemsbacktotheuserastheirbill
// */

// float pencil,pen,eraser;

// cout<<"Enter the how much pencil items you want : ";
// cin>>pencil;

// cout<<"Enter the how much pen items you want : ";
// cin>>pen;

// cout<<"Enter the how much eraser items you want : ";
// cin>>eraser;

// float total_cost=pencil+pen+eraser;

// cout<<"The total cost of the all three items = "<<total_cost<<endl;
// cout<<"The total cost of the all three items with gst = "<<(total_cost+(0.18 * total_cost))<<endl;


// 3...calculate the simple interest

// int p,r,t;

// cout<<"enter the value of the principle : ";
// cin>>p;

// cout<<"enter the value of the rate : ";
// cin>>r;

// cout<<"enter the value of the time : ";
// cin>>t;

// int simple_interest=(p*r*t)/100;

// cout<<"The simple interest = "<<simple_interest<<endl;

// 4...calculate the area of the circle

// int radius;

// cout<<"Ennter the value of the radius = ";
// cin>>radius;

// int area=(3.14*radius*radius);

// cout<<"The area of the circle = "<<area<<endl;

// practice questions

// cout<<(bool)3+2<<e ndl;
// cout << (23.5 + 2 + 'A') <<endl;

//  OUTPUT BASED QUESTIONS 

//1....

// int x = 2, y = 5;
// int exp1 = (x * y / x);
// int exp2 = (x * ( y / x));
// cout << exp1 << ",";
// cout << exp2 << "\n";

/*
 ANSWER = 5,4
*/

//2....

// int x = 10,y = 5;

// int exp1 = (y * (x / y + x / y));
// int exp2 = (y * x / y + y * x / y);

// cout << exp1 << endl;
// cout << exp2 << endl;

/*
ANSWER = 20,20
*/

//3....

// int x = 200,y = 50 , z = 100;

// if(x > y && y > z){
//     cout<< "hello \n";
// }

// if(z > y && z < x){
//     cout<< "C++\n";
// }

// if((y+200) && (y+150) < z){
//     cout << " hello c++\n";
// }

/*
ANSWER = C++
*/


/*
 
 CONDITIONAL STATEMENT 
 ASSIGNMENT QUESTION

*/

//1....  number is  positive , negative or equal to zero

// int number;
// cout << "enter the number : ";
// cin >> number;

// if(number > 0){
//     cout << "number is POSTIVE : " << number << endl; 
// }

// else if (number < 0){
//     cout << "number is NEGATIVE : " << number << endl;
// }

// else{
//     cout << "number is equal to ZERO : " << number << endl;
// }

// int year;
// cout << "enter year(in thousands) : ";
// cin >> year;

// if(year % 4 == 0){
//     cout << year << " is a LEAP year " << endl;
// }

// else{
//     cout << year << " year is NOT a leap yer " << endl;
// }

//2 .. what is the value of x ?

// int a = 63,b =36;
// bool x = ( a < b ) ? true : false;
// int y = (a > b ) ? a : b;
// cout << x << "," << y << endl;

//3... predict the output ???

// int a = 5;

// if ( ++a*5 <= 25){
//     cout << "HELLO\n";
// }
// else{
//     cout << "Bye\n";
// }

/// output is Bye

// ARMSTRONG NUMBER = 3*3*3+7*7*7+1*1*1 = 371

// int number;

// cout << "enter the number : ";
// cin >> number;
// int n = number ;

// int dig1 = number % 10;
// number/=10;
// int dig2 = number % 10;
// number /= 10;

// int dig3 = number;

// int cubeSum = dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3;

// if(cubeSum == n){
//     cout << n << " is a armstrong number" << endl;
// }

// else{
//     cout << number << "is not a armstrong number" << endl;
// }


/////      LOOPS QUESTIONS 

//1.....
/*
WAP TO FIND THE FACTORAL OF A NUMBER ENTERED BY USER
*/

// int n;
// cout << "enter the value of n : ";
// cin >> n;

// int fact = 1 ;

// for(int i = 1 ; i <= n ; i++){
//     fact*=i;
// }

// cout << " factorial of  " << n << " = " << fact << endl;

//2...
/*
MULTIPLICATION OF TABLE ENTERED BY USER
*/

// int n ;

// cout << "enter the value of the n : ";
// cin >> n;

// for(int i = 1 ; i <= 10 ; i++ ){
//   cout << (n*i) << endl;
// }

//3...
/*
WAP TO CHECK IF A GIVEN NO IS ARMSTRONG NUMBER IS NOT
*/

// int n; 
// int cubesum = 0;

// cout << "enter the value of the n : ";
// cin >> n;

// int num = n;

// while(num > 0){
//     int lastdg = num % 10;
//     cubesum += lastdg * lastdg * lastdg;
//     num /= 10;

// }

// if(n == cubesum){
//     cout << "Armstrong number" << endl;
// }

// else{
//     cout << "NOT Armstrong number" << endl;
// }

//3....
/*
WAP TO PRINT THE FIRST N FIBBONACCI NUMBERS
*/

// int  n ;
// cout << "enter n : ";
// cin >> n;

// int first = 0,second = 1;

// cout << first << " " << second << " ";

// for(int i= 2 ; i <= n ; i++){
//     int third = first + second;
//     cout << third << " ";
//     first = second;
//     second = third;
// }

// cout << "\n";

///5...
/*
PRIME NUMBER FROM 2 TO N
*/

// int n; 
// cout << "enter n : ",
// cin >> n;
// for(int i = 2 ; i <= n ;i ++){
// int curr = i ;
// bool isprime = true;


// for(int j = 2 ; j * j <= i ; j++ ){
//     if(curr % j == 0){
//         isprime = false; 
//     }
// }

// if(isprime){
//     cout << curr << " ";
// }
// }




return 0;
}



