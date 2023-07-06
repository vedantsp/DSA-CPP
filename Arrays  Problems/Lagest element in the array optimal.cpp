#include<bits/stdc++.h>
using namespace std;

int findLargestElement(int arr[], int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    
    int arr1[]= {1,2,2,5,9,10,4,1};
    int n = 8;
    int max = findLargestElement(arr1,n);
    cout<<"The largest element in the array is : "<<max<< endl;
    
    int arr2[] = {3,2,1,};
    n = 3;
    max = findLargestElement(arr2, n);
    cout<<"The largest element in the second array is : "<<max;
    
    return 0;
}
