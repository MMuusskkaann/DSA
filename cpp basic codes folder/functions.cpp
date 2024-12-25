#include<iostream>
using namespace std;

void sayHello(){
    cout<<"Hello World :)"<<endl;;
}

int sum(int a, int b){ //parameters 
    int sum = a + b;
    return sum;
}

int pro(int a, int b){
    return a * b;
}


int odd_Even(int n){
    if(n % 2 == 0){
        cout<< " Even"<<endl;
    }

    else{
        cout<<"Odd"<<endl;
    }
}


int factorial(int n){
    int fact = 1;
    for(int i = 1 ; i<=n ;i++){
        fact =  fact *i;
    }
    return fact;
}


bool isPrime(int n){
    if(n == 1){
        return false;
    }

    for(int i = 2 ; i<n ;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;

}


//binomial coefficient
int fact(int n){
    int fact = 1;
    for(int i = 1 ; i<= n ; i++){
         fact *= i;
    }
    return fact;
}

int binCoeff(int n, int r){
    int val1 = fact(n);
    int val2 = fact(r);
    int val3 = fact(n-r);
    int result = val1 / (val2 * val3);
    return result;

}


//pallindrome number

int rev(int n){
    int res= 0;

    while(n>0){
        int lastDig = n % 10;
        res = res * 10 + lastDig;
        n = n/10;
    }
    return res;
}

bool isPalindrome(int num){
    int revnum = rev(num);
    return num == revnum;
}


int digSum(int n){
    int res = 0;
    while(n>0){
          res += n%10;

          n = n/10;
    }

    return res;

}


int largest(int a,int b,int c){
    if(a>= b && a>= c){
        return a;
    }

    else if(b>=c){
        return b;
    }

    else{
        return c;
    }
}

int sqr(int a,int b){
    return a*a + b*b + 2*a*b;
}


char getNext(char ch){
    if(ch == 'z'){
        return 'a';
    }

    else{
        return ch + 1;
    }
}
int main(){

    sayHello();

    int s = sum(2,4); //argments 
    cout<< "Sum = " << s<< endl;

    int product = pro(2,4);
    cout<<"Product = " << product << endl;

    odd_Even(8);

    cout << " Factorial = " << factorial(5) <<endl;

    cout<<" is Prime " <<isPrime(23) << endl;

    cout<< " Binomial coefficient = " <<binCoeff(3,2) <<endl;

    cout << isPalindrome(123)<< endl;

    cout<< digSum(3) <<endl;

    cout<< "Square = " << sqr(2,4) <<endl;

    cout<< "Value is greater = " << largest(3,56,7)<<endl;

    cout<< "Character = " << getNext('d') << endl;
    return 0;
}