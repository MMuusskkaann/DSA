#include<iostream>
#include<vector>
#include<string>
using namespace std;

void merge(string array[],int si , int mid ,int ei){
    int m = mid;
    int n = ei ;

    vector<string>temp;

    int i = si;
    int j = mid+1;

    while(i <= m && j <= n){
        if(array[i] <= array[j]){
            temp.push_back(array[i]);
            i++;
        }
        else{
            temp.push_back(array[j]);
            j++;
        }
    }

    while(i <= m){
        temp.push_back(array[i]);
        i++;
    }

    while(j<=n){
        temp.push_back(array[j]);
        j++;
    }

    for(int idx = 0, x = si ; x<=ei;x++){
        array[x] = temp[idx++];
    }
}

void mergesort(string array[] , int si , int ei){
    if(si >= ei){
        return; 
    }

    int  mid = si + (ei-si)/2;
    mergesort(array,si,mid);
    mergesort(array,mid+1,ei);

    merge(array,si,mid,ei);
}

int main(){
    string array[] = {"sun" , "earth" , "mars" , "mercury"};
    mergesort(array,0,3);

    for(int i = 0 ; i< 4 ; i++){
        cout << array[i] << endl;
    }
    return 0;
}



// void merge(string arr[],int lo,int mid,int hi){
//     int m=mid;
//     int n=hi; 
//     vector<string>temp;
//     int i=lo;
//     int j=mid+1; 
//     while(i<=m&&j<=n){
//         if(arr[i]<=arr[j]){
//             temp.push_back(arr[i]);
//             i++;
//             }
//         else{
//             temp.push_back(arr[j]);
//             j++;
//             }
//         }
//         while(i<=m){
//                 temp.push_back(arr[i]);i++;
//                 }while(j<=n){temp.push_back(arr[j]);
//                 j++;
//                 }
//         for(int idx=0,x=lo;x<=hi;x++){
//             arr[x]=temp[idx++];
//             }
//         }
        
// void mergeSort(string arr[],int lo,int hi){
//     if(lo>=hi){ 
//         return;
//     }
    
//     int mid=lo+(hi-lo)/2;
//     mergeSort(arr,lo,mid);
//     mergeSort(arr,mid+1,hi);
//     merge(arr,lo,mid,hi);
//     }
    
//     int main(){
//         string arr[4]={"sun","earth","mars","mercury"};
//         mergeSort(arr,0,3);
//         for(int i=0;i<4;i++){
//             cout<<arr[i]<<endl;
//             }
//             return 0;
//             }
            
           

