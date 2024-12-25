#include<iostream>
using namespace std;

int main(){
     
    int n = 5;

    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=n ; j++){
            cout << i << " ";
        }
        cout<<endl;
    }

    
    cout<< endl;

    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=i ; j++){
            cout<< "*" << " ";
        }

        cout<<endl;
    }

    cout<< endl;
   
    for(int i = 1 ; i<=n ;i++){
        for(int j = 1 ; j<=n-i+1 ; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    cout<< endl;

    for(int i = 1 ; i<=n ; i++){
        for(int j= 1 ; j<=i ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<< endl;

    char ch = 'A';

    for(int i = 1 ; i<=n ; i++){
        for(int j = 1; j<=i ; j++){
            cout<<ch << " ";
            ch++;
        }
        cout<<endl;
    }

    cout<< endl;

    for(int i = 1 ; i<= n ;i++){
        cout<< "*"; //first star
        for(int j = 1 ; j<n;j++){
            if(i == 1 || i == n){
                cout<<"*"; 
           }
           else{
            cout<< " ";
           }
        }

        cout<< "*"<<endl; // last star
    }

        cout<< endl;

    for(int i = 1 ; i<=n ;i++){
        //spaces
        for(int j = 1 ; j<=n-i; j++){
            cout<<" ";
        }

        //stars
        for(int j = 1; j<=i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }

        cout<< endl;
        int num = 1;
        for(int i = 1 ; i<=n ;i++){
            for(int j = 1 ;j <= i ; j++){
                cout<<num <<" ";
                num++;
            }
            cout<<endl;
        }

            cout<< endl;

        for(int i = 1; i<=n ;i++){
            //spaces
            for(int j = 1 ; j<=n-i ;j++){
                cout<< " ";
            }

            //stars
            for(int j = 1 ; j<=2*i-1 ;j++){
                cout<< "*";
            }

            cout<<endl;
        }

        for(int i = n ; i>=1;i--){
            //spaces

            for(int j = 1 ; j<=n-i ; j++){
                cout<<" ";
            }

            for(int j = 1 ; j<= 2*i-1 ; j++){
                cout<<"*";
            }
            cout<<endl;
        }

        cout<<endl;

        bool val = true; // Start with true (1)
    
    for (int i = 0; i < n; i++) {
        bool row_start = val;
        for (int j = 0; j <= i; j++) {
            cout << row_start; // Print the current value
            row_start = !row_start;  // Toggle for the next value
        }
        val=!val;
        cout << endl; // Move to the next line
    }

    cout<<endl;

    for(int i = 0 ; i<n ; i++){
        //spaces
        for(int j = 0 ;j<= n-i ;j++){
            cout<< " ";
        }

        //stars
        for(int j = 0 ; j<n; j++){
            cout<<"*" <<" ";
        }
        cout<<endl;
    }

     cout<<endl;

    for(int i = 1; i<=n ;i++){
        //spaces
        for(int j = 1 ; j<= n-i ; j++){
            cout<<" ";
        }

        //nums
        for(int j = i ; j>=1 ; j--){
            cout<<j;
        }

        //nums
        for(int j = 2 ; j<=i ;j++){
            cout<<j;
        }

        cout<<endl;
    }


    return 0;
}
