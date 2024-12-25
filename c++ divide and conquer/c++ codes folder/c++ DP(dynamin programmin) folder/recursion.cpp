#include<iostream>
#include<vector>
using namespace std;


// normal recursion
int fib(int n){ //O(2^n)
    if(n == 0 || n == 1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}

/// DP recursion TC --> O(n)
//memoization
int fibDP(int n, vector<int> &f){ //O(2^n)
    //Base case
    if(n == 0 || n == 1){
        return n;
    }
    
    if(f[n] != -1){
        return f[n];
    }
    f[n] = fibDP(n-1, f) + fibDP(n-2, f);
        return f[n];
}

//tabulation form

int fibTab(int n){//using iteration TC ----> O(n)
    vector<int> fib(n+1, 0);//fib[i] ==> ith fib

    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2 ; i <= n ; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    return fib[n];
}

int main(){
    int n = 7;
    vector<int> f(n+1,-1); //-1 --> can't calculate the value


    cout<< " fibbonacci = " << fib(n) << endl;
    cout<< " fibbonacci = " << fibDP(n,f) << endl;
    cout<< " fibbonacci = " << fibTab(n) << endl;


    return 0;
}