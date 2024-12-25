// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int low, int high, int key) {
//     if (low > high)
//         return -1; // Base case: element not found

//     int mid = low + (high - low) / 2;

//     if (arr[mid] == key)
//         return mid; // Base case: element found at mid

//     // If arr[low..mid] is sorted
//     if (arr[low] <= arr[mid]) {
//         // If key is present in this range
//         if (key >= arr[low] && key <= arr[mid])
//             return binarySearch(arr, low, mid - 1, key);
//         // Else search in the right half
//         return binarySearch(arr, mid + 1, high, key);
//     }

//     // If arr[low..mid] is not sorted, then arr[mid..high] must be sorted
//     // If key is present in this range
//     if (key >= arr[mid] && key <= arr[high])
//         return binarySearch(arr, mid + 1, high, key);
//     // Else search in the left half
//     return binarySearch(arr, low, mid - 1, key);
// }

// int main() {
//     int arr[] = {4, 5, 6, 7, 1, 2, 3}; // Rotated sorted array
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int key = 5;

//     int result = binarySearch(arr, 0, n - 1, key);
//     if (result != -1)
//         cout << "Element found at index " << result << endl;
//     else
//         cout << "Element not found in the array" << endl;

//     return 0;
// }


 ///////////////////Question number 2/////////////////
// // #include<iostream>
// // #include<string>
// // using namespace std;

// // void allOccu(int arr[] , int key , int i , int n){
// //     if(i == n){
// //         return; 
// //     }

// //     if(arr[i] == key){
// //         cout << i << " ";
// //     }

// //     allOccu(arr,key,i+1,n);
// // } 
// // int main(){
// //     int arr[9] = {3,2,4,5,6,2,7,2,2};

// //     allOccu(arr,2,0,9);
// //     return 0;
// // }

#include <iostream>
#include <string>
using namespace std;

int countSubstrings(string S) {
    int n = S.length();
    int count = 0;

    // Iterate over each character as the starting character
    for (int i = 0; i < n; ++i) {
        // Iterate over each character from the starting character to the end
        for (int j = i; j < n; ++j) {
            // If the start and end characters are the same, count the substring
            if (S[i] == S[j]) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    string S1 = "abcab";
    cout << "Count of substrings for '" << S1 << "' is: " << countSubstrings(S1) << endl;  // Output: 7

    string S2 = "aba";
    cout << "Count of substrings for '" << S2 << "' is: " << countSubstrings(S2) << endl;  // Output: 4

    return 0;
}